#include<stdio.h>
int main()
    {
    int row,col,n,num=1;
    scanf("%d",&n);

        for(row=1;row<=n;row++)
        {
            num=row;
            for(col=1;col<=row;col++)
            {
                printf("%d",num);
                num++;
            }
            printf("\n");

        }
    }

/*

*/
