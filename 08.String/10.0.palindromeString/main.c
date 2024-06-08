#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindromeCheck(char *input)
{
        int len=0;
    while(input[len]!='\0')
    {
        len++;
    }
   int left =0;
   int right = len-1;
   while(left<right){

    if(input[left]!= input[right]){
        return 0;
    }
    left++;
    right--;
   }
   return 1;
}

void main()
{
    char input[50];
    printf("Enter string: ");
    scanf(" %[^\n]",input);

  if(palindromeCheck(input))
    {
        printf("Palindrome");
    }
    else
    {
        printf("No");
    }
}
