#include<stdio.h>
#include<stdbool.h>
int main()
    {
        int a,b,c;
        bool x,y,z;
        scanf("%d%d%d",&a,&b,&c);
        if((a+b)<=80)
        {
            x = true;
        }
        if(!(a+c))
        {
            y= true;
        }
        if(a!=0)
        {
            z = true;
        }
        printf("(a)%d\n(b)%d\n(c)%d\n",x,y,z);
    }
