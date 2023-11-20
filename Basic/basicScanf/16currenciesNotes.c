#include<stdio.h>
int main()
    {
        int input,one,five,ten,fifty,hundred,fiveHundred;
        printf("Enter amount: ");
        scanf("%d", &input);

        fiveHundred = input/500;
        input %=500;
        hundred = input/100;
        input %=100;
        fifty = input/50;
        input %= 50;
        ten = input/10;
        input %=10;
        five = input/5;
        input %= 5;
        one = input/1;

        printf("%d notes of 500 \n %d notes of 100 \n %d notes of 50 \n %d notes of 10 \n %d notes of 5\n %d notes of 1\n",fiveHundred,hundred,fifty,ten,five,one );

    }
