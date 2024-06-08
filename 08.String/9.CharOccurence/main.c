#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[100];
    char c,ch;
    printf("Enter string: ");
    scanf(" %[^\n]",input);
    printf("Enter character to search: ");
    scanf(" %c",&ch);

    int count=0;
    for(int i=0;(c =input[i])!='\0';i++)
    {
        if(c<='Z' && c>='A')
            c += 32;
        if(c==ch)
            count++;

    }


   printf("Count of '%c' in the string: %d\n", ch, count);
    return 0;
}
