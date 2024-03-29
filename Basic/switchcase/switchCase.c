#include<stdio.h>
int main()
    {
        int choice;
        printf("Enter a choice (1-3): ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            printf("You have entered choice %d\n",choice);
            break;
        case 2:
            printf("You have entered choice %d\n",choice);
            break;
        case 3:
            printf("You have entered choice %d\n",choice);
            break;
        default:
            pirntf("Invalid choice! /n");
            break;
        }

    return 0;
    }
