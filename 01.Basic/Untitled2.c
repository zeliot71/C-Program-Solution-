#include<stdio.h>
#include<stdbool.h>

int main()
    {
        long int num1 = 2147483647;
        long long int num2 = 9223372036854775807;
        long double num3 = 9223372036854778870;
        short int num4 = 32134;

        long int mun1 = 3513203;
        long long int mun2 = 6516565020356;
        long double mun3 = 62+60+6+269845123;
        short mun4 = 856;

        printf("The long int value: %lu \n The long long int value: %llu \n The long double value: %LF \n The short int value: %hu\n\n",num1,num2,num3,num4);
        printf("The long int value: %ld \n The long long int value: %lld \n The long double value: %LF \n The short int value: %hi\n",num1,num2,num3,num4);

    }
