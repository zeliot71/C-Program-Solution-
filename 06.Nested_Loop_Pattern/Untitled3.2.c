#include<stdio.h>
int main()
    {
        int n,row,col;
        scanf("%d",&n);

        for(row=1;row<=n;row++)
        {
            for(col=1;col<=n;col++)
            {
                if(row<=n-col)
                {
                    printf("  ");
                }
                else
                {
                    printf("%c ",row+64);
                }
            }
            printf("\n");
        }
    }