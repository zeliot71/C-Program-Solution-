#include<stdio.h>
int main()
    {
        int num,rev=0,digit=0;
        scanf("%d",&num);

        while(num!=0)
        {
            //rev=rev*10+num%10;
            rev=num%10;
            printf("%d",rev);
            num/=10;
        }
        //printf("%d",rev);
    }
