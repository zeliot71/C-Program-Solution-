#include<stdio.h>
int main()
    {

        int n,row,col;
        scanf("%d",&n);

        for(row=1;row<=n;row++)
        {
            for(col=1;col<=n;col++)
            {
                if(row%2!=0)
                {
                    printf("*");
                }
                else
                {
                    if(col==1||col==n)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf("_");
                    }
                }
            }
            printf("\n");
        }
    }
