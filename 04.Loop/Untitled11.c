#include<stdio.h>
#include<math.h>
int main()
    {
        int i,x=1,y=2,n,result=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            result+=pow(x,2)*y;
            x++;
            y++;
        }
        printf("Result: %d",result);
    }
