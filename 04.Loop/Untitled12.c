#include<stdio.h>
int main()
    {
        int n,i,temp,x=0,y=1;
        scanf("%d",&n);

        printf("Fibonacci series: %d, %d",x,y);
        for(i=0;i<=n-2;i++)
        {
            temp = x+y;
            printf(", %d",temp);
            x=y;
            y=temp;

        }

    }

