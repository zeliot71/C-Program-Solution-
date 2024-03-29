#include<stdio.h>
int main()
    {
        int n,m,rev=0;
        scanf("%d",&n);
        m=n;

        while(n!=0)
        {
            rev=rev*10+n%10;
            n/=10;
        }

        if(rev==m)
        {
            printf("Yes");
        }
        else{
            printf("No");
        }

    }
