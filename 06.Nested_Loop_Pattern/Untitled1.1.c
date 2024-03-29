/*
Triangle Shape 01.1
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
printf("%d ",col);
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
printf("%d ",row);

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
                //printf("%d ",col);
                printf("%d ",row);
            }
            printf("\n");
        }
    }
