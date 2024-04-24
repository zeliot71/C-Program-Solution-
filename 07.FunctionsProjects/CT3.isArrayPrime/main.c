#include <stdio.h>
#include <stdlib.h>

int isPrime(int arr[],int n)
{
     int count=0;
    for(int i=0;i<n;i++)
    {
        int isPrime=1;
        for(int j=2;j<=arr[i]-1;j++)
        if(arr[i]%j==0)
        {
            isPrime = 0;
            break;
        }

        if(isPrime&&arr[i]>1)
        {
            count++;
        }
    }
    return count;
}

    int isArrayPrime(int *arr[],int n)
    {
        int count= isPrime(arr,n);

    if(count>n/2)
        {
        return 1;
        }
    else{
        return 0;
        }
    }


int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",isArrayPrime(arr,n));
    return 0;
}
