#include<stdio.h>
int main()
    {
        int x,a;
        scanf("%d",&x);

        a = x&(x-1);
        if(x==0)
        {
            printf("Zero is not a valid input!");
        }
        else if(x<0)
        {
            printf("Negative input is not valid!");
        }
        else if(a==0)
        {
            printf("Yes");
        }
        else
            {
                printf("No");
            }
    }
