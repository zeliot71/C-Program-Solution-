#include<stdio.h>
int main()
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);

        if(a>0 && a<180&& b>0 && b<180 && c<180 && c>0)
        {
            if(a+b+c==180)
            {
                printf("Yes");
            }
            else
            {
                printf("No!");
            }
        }
        else
            {
                printf("No!");
            }

    }
