/*
Diamond Shape
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *

*/

#include<stdio.h>
int main()
{
    int n,col,row;
    scanf("%d",&n);

    for(col=1;col<2*n;col++)
    {
        if(col<=n)
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
     else
        {
            for(row=n;row<2*n;row++)
        {
            if(row<=col-1)
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
}


