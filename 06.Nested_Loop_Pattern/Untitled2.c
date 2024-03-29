/*
Triangle Shape 02
* * * * *
* * * *
* * *
* *
*

*/
#include<stdio.h>
int main()
    {
        int n,col,row;
        scanf("%d",&n);

        for(col=1;col<=n;col++)
        {
            for(row=n;row>=col;row--)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
