#include<stdio.h>
int main()
    {
        char c;
        scanf("%c",&c);

        if(c>=65&& c<=90 || c>=97&& c<=122)
        {
            printf("Character");
        }
        else if(c<=57&& c>=48)
        {
            printf("Digit");
        }
        else
        {
            printf("Special");
        }
        return 0;
    }
