/*
Triangle shape 02
A A A A A
B B B B
C C C
D D
E
row+64

A B C D E
A B C D
A B C
A B
A
col+64
*/
#include<stdio.h>
int main()
    {
        int n,row,col;
        scanf("%d",&n);

        for(row=1;row<=n;row++)
        {
            for(col=1;col<=n-row+1;col++)
            {
                printf("%c ",col+64);
            }
            printf("\n");
        }
    }
