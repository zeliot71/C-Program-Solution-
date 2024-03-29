#include<stdio.h>
int main()
{
    int row,col,n;
    scanf("%d",&n);

    for(row=1;row<n*2;row++)
    {
        if(row<=n)
            {
                for(col=1;col<=n;col++)
                {

                     if(row<=n-col+1)
                    {
                        printf("_");

                    }
                    else{
                            printf("%d",col);


                    }

                }
            }
        printf("\n");
    }
}
