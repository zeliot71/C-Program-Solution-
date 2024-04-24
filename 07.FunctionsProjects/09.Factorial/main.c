#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    int factos=1;
    for(int i =n;i>0;i--)
    {
        factos*=i;
    }
}
int main()
{
    printf("Enter the number: ");
    int n;
    scanf("%d",&n);

    int result =fact(n);

    printf("Factorial of %d is %d",n,result);
    return 0;
}
