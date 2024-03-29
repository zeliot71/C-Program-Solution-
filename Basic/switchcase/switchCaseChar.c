#include<stdio.h>
int main()
    {
        char choice;
        printf("Enter a choice (a,b or c): ");
        scanf("%c", &choice);

        switch(choice)
        {
        case 1:
            printf("You have entered choice %c\n",choice);
            break;
        case 2:
            printf("You have entered choice %c\n",choice);
            break;
        case 3:
            printf("You have entered choice %c\n",choice);
            break;
        default:
            pirntf("Invalid choice! /n");
            break;
        }

    return 0;
    }
