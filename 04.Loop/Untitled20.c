#include<stdio.h>
int main()
    {
        int n,i,num=0,sum=0;
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            num=num*10+i;
            sum+=num;
        }
        //printf("%d\n",num);
        printf("%d\n",sum);
    }


    /*
    Manual Tracing
    num=0
    i=1
    num=0*10+1=1
      sum=0

    i=2
    num=1*10+2=12
    sum=1+12+

    i=3
    num=12*10+3=123
    sum=1+12+123=136

    i=4
    num=123*10+4=
    sum=1+12+123+1234=1370
    */
