#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[100];
    printf("Enter string: ");
    scanf("%[^\n]",input);
    char maxChar;
    int count,maxCount=0;
    for(int i=0;input[i]!='\0';i++)
    {
        if(input[i]<='Z' && input[i]>='A'){
            input[i] += 32;
        }

        count =0;

        for(int j=0;input[j]!='\0';j++)
        {
            if(input[i]==input[j] && input[i]<'z' && input[i]>'a')
                count ++;
        }
        if(maxCount<count)
        {
            maxCount=count;
            maxChar= input[i];
        }

    }


    printf("%c is repeated %d time",maxChar,maxCount);
    return 0;
}
