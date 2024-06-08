#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char temp,rev[50], input[50];
    printf("Enter string: ");
    scanf(" %[^\n]",input);
    int len=0;

    //length without using built in function
    for(int i=0;input[i]!='\0';i++)
    {
        len++;
    }
    //copy
    for(int i=0;i<len;i++)
    {
        rev[i]=input[i];
    }
    //reverse
    for(int i=0;i<len/2;i++)
    {
        temp = rev[i];
        rev[i]= rev[len-1-i];
        rev[len-1-i] = temp;
    }

    //printf("Rev: %s\n input: %s",rev,input);
    int flag =1;
    for(int i=0;i<len;i++)
    {
        if(input[i]!=rev[i])
            flag =0;
    }

  if(flag>0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("No");
    }

    return 0;
}
