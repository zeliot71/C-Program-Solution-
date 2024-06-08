#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseWord(char *word)
    {
        char temp;
        int len = strlen(word);
        for(int i=0;i<len/2;i++)
        {
            temp = word[i];
            word[i]= word[len-i-1];
            word[len-i-1] = temp;
        }
    }


int main()
{
   char input[50];
    printf("Enter the string: ");
    scanf("%[^\n]",input);
    char word[50];

    int i,j;
    for(i=0,j=0;input[i]!='\0';i++)
    {
        if(input[i]==' ')
        {
            word[j]='\0';
            reverseWord(word);
            printf("%s ",word);
            j=0;
        }
        else{
            word[j++]= input[i];
        }
    }
        word[j]='\0';
            reverseWord(word);
            printf("%s",word);

    return 0;
}
