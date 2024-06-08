#include <stdio.h>
#include <stdlib.h>

void isPrime(int n)
{
    int count=0;

    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
            {
                count=1;
                break;
            }
    }

    if(count>0 || n==2)
        {
            printf("Prime!");
        }
    else
        {
            printf("Not Prime!");
        }
}
int main()
{
    int n;
    printf("Enter a number to check prime or not: ");
    scanf("%d",&n);

    isPrime(n);
    return 0;
}
