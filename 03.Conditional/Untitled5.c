#include<stdio.h>
int main()
    {
        int x;
        scanf("%d",&x);
        if(x&(x-1)==0)
        {
            printf("Power of two.");
        }
        else
        {
            printf("Not power of two!");
        }

    }
