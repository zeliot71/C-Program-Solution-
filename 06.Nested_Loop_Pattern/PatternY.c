#include<stdio.h>
int main()
    {
        int n,row,col;

        scanf("%d",&n);


        for(row=1;row<2*n;row++)
        {
            for(col=1;col<2*n;col++)
            {
                if(row==col&&col<n)
                {
                    printf("*");
                }
              else if(row+col==2*n&& row<n)
                {
                    printf("*");
                }
                 else if(col==n&&row>=n)
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
