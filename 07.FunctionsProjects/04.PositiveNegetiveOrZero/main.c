#include <stdio.h>
#include <stdlib.h>

void posNeOrZero(int num)
{
    if(num>0)
    {
        printf("Positive!");
    }
    else if(num<0)
    {
        printf("Negetive!");
    }
    else{
        printf("Zero!");
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    posNeOrZero(num);
}
