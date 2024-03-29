#include<stdio.h>
int main()
    {
        int i,n,is_prime=1;
        scanf("%d",&n);

        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                is_prime==0;
                break;
            }
        }
        if(n<=1)
        {
            is_prime=0;
        }
        if(is_prime)
        {
            printf("Prime");
        }
        else
        {
            printf("Not Prime");
        }
    }
