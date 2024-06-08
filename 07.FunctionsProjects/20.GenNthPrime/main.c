#include <stdio.h>
#include <stdlib.h>
#include<math.h>

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

void genNthPrime(int n)
{
    int count=0;
    printf("%dth prime: ",n);
    for(int i=2; ;i++)
    {
        if(isPrime(i))
        {
            count++;
            if(count==n)
            {
                printf("%d",i);
                break;
            }
        }
    }
}




int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    genNthPrime(n);
    return 0;
}
