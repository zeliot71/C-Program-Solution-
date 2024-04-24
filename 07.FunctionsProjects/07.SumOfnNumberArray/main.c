#include <stdio.h>
#include <stdlib.h>

int CalculateSum(int n)
{
    int sum=0;
    int num[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter how many elements: ");
    scanf("%d",&n);

    int sum =CalculateSum(n);

    printf("Sum of n %d numbers is: %d",n,sum);
    return 0;
}
