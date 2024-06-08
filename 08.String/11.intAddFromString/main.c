#include <stdio.h>
#include <stdlib.h>

void main()
{
    char input[50];
    printf("Enter string: ");
    scanf(" %[^\n]",input);

    int sum=0,len =0;

    while(input[len]!='\0')
    {
        if(input[len]=='1')
        {
            sum+=1;
        }
        else if(input[len]=='2')
        {
            sum+=2;
        }
        else if(input[len]=='3')
        {
         sum+=3;
        }
         else if(input[len]=='4')
        {
            sum+=4;
        }
         else if(input[len]=='5')
        {
            sum+=5;
        }
         else if(input[len]=='6')
        {
            sum+=6;
        }
         else if(input[len]=='7')
        {
            sum+=7;
        }

         else if(input[len]=='8')
        {
            sum+=8;
        }

         else if(input[len]=='9')
        {
            sum+=9;
        }
        len++;
    }
    printf("%d",sum);

}
