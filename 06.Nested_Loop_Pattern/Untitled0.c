#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the limit: ");
    scanf("%d",&n);

    printf("Prime number from 2 to %d: ",n);
    for(i=2;i<=n;i++)
    {
        int prime =1;
        for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                 prime=0;
                 break;
                }

            }
        if(prime)
        {
            printf("%d ",i);
        }
    }


}
