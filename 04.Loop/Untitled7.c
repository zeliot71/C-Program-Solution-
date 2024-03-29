#include<stdio.h>
int main()
    {
        char input;
        int count=1;

       while(input!='A')
       {
           scanf(" %c",&input);
           printf("Input %d: %c \n",count,input);
            count++;
       }
    }

