
/*
Triangle Shape 01.0
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
col%2
1
0 0
1 1 1
0 0 0 0
1 1 1 1 1
row%2
*/
#include<stdio.h>
int main()
    {
        int row,col,n;
        scanf("%d",&n);

        for(row=1;row<=n;row++)
        {
            for(col=1;col<=row;col++)
            {
                printf("%d ",col%2);
            }
            printf("\n");
        }
    }
