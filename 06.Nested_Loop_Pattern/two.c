#include <stdio.h>
int main()
{
    int n, row, col;
    scanf("%d", &n);
    for (row = 1; row < n * 2; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if (i == 1 || i == n || i==2*n-1)
            {
                printf("*");
            }

            else if(j==1&&j>=n)
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
