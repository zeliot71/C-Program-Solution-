#include<stdio.h>
int main()
    {
        int i,x,y,pw=1;
        scanf("%d%d",&x,&y);

        for(i=0;i<y;i++)
        {
            pw*=x;
        }
        printf("%d",pw);
    }
