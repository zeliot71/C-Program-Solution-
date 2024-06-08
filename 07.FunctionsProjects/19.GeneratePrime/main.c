#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void generatePrime(int n)
{
    printf("Prime less than %d: ",n);
    for(int i=2;i<n;i++)
    {
        if(isPrime(i))
        {
            printf("%d ",i);
        }
    }
}

int isPrime(int a)
{
    int count=0;

    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
            {
                count=1;
                break;
            }
    }

    if(count==0 || a==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}


int main()
{
    int n;
    printf("Enter a number to check prime or not: ");
    scanf("%d",&n);

    generatePrime(n);
    return 0;
}
