#include<stdio.h>
#include<stdbool.h>
int main()
    {
        int a,b,c;
        bool x,y,z;
        scanf("%d%d%d",&a,&b,&c);
        x = ((a+b)<=80 && b>=0);
        y = ((a-b)>=0||(c!=0));
        z = (a!=0|| (b<a)&&c>0);

        printf("(a)%d\n(b)%d\n(c)%d\n",x,y,z);
    }

