#include <stdio.h>
#include <stdlib.h>

int sumOfnumber(int n)
{
    int num,sum=0;

    for(int i=0;i<n;i++)
   {
        scanf("%d",&num);
        sum+=num;
   }
   return sum;

}

int main()
{
    int n,sum;
    printf("Enter N: ");
    scanf("%d",&n);
    sum = sumOfnumber(n);

    // Display the sum calculated inside the function
    printf("Sum In Function: %d\n", sum);

    return 0;
}
