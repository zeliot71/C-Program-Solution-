/*
Triangle Shape 03
        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5
row

        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5
*/
#include<stdio.h>
int main()
{
    int n,row,col;
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row<=n-col)
            {
                printf("  ");
            }
            else
            {
                printf("%d ",col);
            }
        }
        printf("\n");
    }
}
