#include<stdio.h>
main()
{
	FILE *file1;
	char data[20];
	file1=fopen("tops.txt","a");
	printf("Enter data:");
	scanf("%s",&data);
	fprintf(file1,"%s",&data);
	fclose(file1);
	
	file1=fopen("tops.txt","r");
	fscanf(file1,"%s",&data);
	printf("%s",&data);
}