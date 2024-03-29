#include<stdio.h>
int main()
    {
        int a,b,x,y,rem;
        scanf("%d%d",&x,&y);
        a=x;
        b=y;

        while(y!=0)
        {
            rem=x%y;
            x=y;
            y=rem;
        }
        printf("GCD: %d\n",x);
        printf("LCM: %d\n",a*b/x);
    }
