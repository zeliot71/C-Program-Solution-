/*
Triangle shape 02
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5
row
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
col
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
                int num=2*col;
                printf("%d ",num);

                    num-=2;
                }
            printf("\n");
        }
    }
