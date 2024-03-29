/*
Triangle Shape 03
        *
      * *
    * * *
  * * * *
* * * * *

*/

#include<stdio.h>
int main()
{
    int n,col,row;
    scanf("%d",&n);

    for(col=1;col<=n;col++)
    {
        for(row=1;row<=n;row++)
        {
            if(row<=n-col)
            {
                 printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");

    }
}
