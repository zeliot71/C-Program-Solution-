#include<stdio.h>
int main()
    {
        int n,i,sum=1;
        scanf("%d",&n);
        printf("!%d = ",n);
        for(i=n;i>0;i--)
        {
            sum*=i;
             printf("%d",i);
             if(i!=1)
             {
                 printf(" x ");
             }
        }
        printf("= %d",sum);
    }

