
/*
Triangle Shape 01.0
A
A B
A B C
A B C D
A B C D E
col + 64
A
B B
C C C
D D D D
E E E E E
row + 64
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
                printf("%c ",col+64);
            }
            printf("\n");
        }

    }

