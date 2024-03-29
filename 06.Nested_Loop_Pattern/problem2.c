#include<stdio.h>
int main()
    {
    int row,col,n;
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=row;col<n+row;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    }
