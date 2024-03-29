/*
Triangle Shape 03
        1
      0 1
    1 0 1
  0 1 0 1
1 0 1 0 1

        1
      0 0
    1 1 1
  0 0 0 0
1 1 1 1 1
*/

#include<stdio.h>
int main()
{
    int n,col,row;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(col<=n-row)
            {
                printf(" ");
            }
            else
            {
                printf("%d",col%2);
            }
        }
        printf("\n");

    }

}
