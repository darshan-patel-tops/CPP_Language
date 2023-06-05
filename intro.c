#include <stdio.h>

int main() {
    int iphone, choice;
    
    printf("Enter Phone name you are looking for\n\n");
    printf("     1. Iphone\n");
    printf("     2. VIVO \n");
    scanf("%d", &choice);
    
    printf("\n %d \n", choice);

    if (choice == 1) {
        printf("Choose the model \n");
        printf("1. Iphone 13\n");
        printf("2. Iphone 13 pro\n");
        printf("3. Iphone 14\n");
        printf("4. Iphone 14 pro\n");
        scanf("%d", &iphone);

        if (iphone == 1) {
            printf("Iphone 13 prices is \n");
            printf("128GB wala he Rs.61,000 only\n");
            printf("256GB wala he Rs.68,500 only\n");
        } else if (iphone == 2) {
            printf("Iphone 13 pro prices is \n");
            printf("128GB wala he Rs.1,17,000 only\n");
            printf("256GB wala he Rs.1,21,500 only\n");
        } else if (iphone == 3) {
            printf("Iphone 14 prices is \n");
            printf("128GB wala he Rs.79,000 only\n");
            printf("256GB wala he Rs.85,500 only\n");
        } else if (iphone == 4) {
            printf("Iphone 14 pro prices is \n");
            printf("128GB wala he Rs.1,27,000 only\n");
            printf("256GB wala he Rs.1,35,500 only\n");
        } else {
            printf("Tare budget se bahar he\n");
        }
    } else {
        printf("Currently Unavailable\n");
    }

    return 0;
}
