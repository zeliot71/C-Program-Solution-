#include <stdio.h>
#include <stdlib.h>

int *reversingArray(int numbers[],int n)
{
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=numbers[i];
        numbers[i]=numbers[n-1-i];
        numbers[n-1-i]=temp;
    }
    return numbers;
}


int main()
{
    int n;
    printf("Enter how many elements you want: ");
    scanf("%d",&n);

    int numbers[n];
    printf("Enter %d numbers: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }

    int *reversedArray = reversingArray(numbers,n);

    printf("Reversed array: ");
    for(int i =0;i<n;i++)
    {
        printf("%d ",reversedArray[i]);
    }
    return 0;
}
