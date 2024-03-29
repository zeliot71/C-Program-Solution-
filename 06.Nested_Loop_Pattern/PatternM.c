#include<stdio.h>
int main()
{
    int n,row,col;
    scanf("%d",&n);

    for(row=1;row<2*n;row++)
    {
        for(col=1;col<2*n;col++)
        {

            if(col==1 ||col==2*n-1)
            {
                printf("*");
            }
            else if(col==row && col<=n)
            {
                printf("*");
            }
             else if(col+row==n*2 && row<=n)
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
