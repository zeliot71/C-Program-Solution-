#include<stdio.h>
int main()
    {
        int input,m,cm;
        printf("Enter the height in centimeter: ");
        scanf("%d",&input);
        m = input/100;
        input %= 100;
        cm = input;
        printf("%d meter %d centimeter",m,cm);
    }
