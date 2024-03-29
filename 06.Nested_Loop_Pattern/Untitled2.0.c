/*
Triangle shape 02
1 1 1 1 1
0 0 0 0
1 1 1
0 0
1
row%2
1 0 1 0 1
1 0 1 0
1 0 1
1 0
1




col%2
*/
#include<stdio.h>
int main()
    {
        int row,col,n;
        scanf("%d",&n);

        for(row=1;row<=n;row++)
        {
            for(col=n;col>=row;col--)
            {
                printf("%d ",row%2);
            }
            printf("\n");
        }
    }
