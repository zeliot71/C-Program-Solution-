#include <stdio.h>
#include <stdlib.h>

void isOdd(int num)
{
    if(num%2==0)
    {
        printf("Even!");
    }
    else{
        printf("Odd!");
    }
}

int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d",&num);

    isOdd(num);
}
