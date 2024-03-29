#include<stdio.h>
int main()
{
    int n,row,col;
    scanf("%d",&n);

    for(row=1;row<2*n;row++)
    {
        for(col=1;col<2*n;col++)
        {

            if(col==row)
            {
                printf("*");
            }
             else if(col+row==n*2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

