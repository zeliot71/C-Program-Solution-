#include<stdio.h>
int main()
    {
        int input,feet,inch;
        printf("Enter the height in feet: ");
        scanf("%d",&input);
        feet = input/12;
        input %=12;
        inch = input;
        printf("%d feet %d inch",feet,inch);

    }
