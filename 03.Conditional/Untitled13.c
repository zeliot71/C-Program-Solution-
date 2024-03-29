#include<stdio.h>
#include<math.h>
int main()
    {
        float a,b;
        printf("Enter two num: ");
        scanf("%f%f",&a,&b);
        printf("Enter the operator:\n 1) + \n 2) - \n 3) * \n 4) / \n");
        int choice;
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("Add: %.f",a+b);
            break;
        case 2:
            printf("Sub: %.f",a-b);
            break;
        case 3:
            printf("Mul: %.f",a*b);
            break;
        case 4:
            printf("Enter the operator:\n 1) / \n 2) %% \n");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
                printf("Quotient: %.f",a/b);
                break;
            case 2:
                printf("Reminder: %0.2f",fmod(a,b));
            break;
            }

        }
    }
