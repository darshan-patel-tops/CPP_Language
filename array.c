#include<stdio.h>
main()
{
	int n[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nEnter elements %d:",i+1);
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d",n[i]);
	}

}