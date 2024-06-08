#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the string; ");
    char input[50];
    scanf("%[^\n]",input);

    int i=0;
    while(input[i]!='\0')
    {
        if(input[i]>='a' && input[i]<='z')
        {
            input[i]-=32;
        }
         else if(input[i]>='A' && input[i]<='Z')
        {
            input[i]+=32;
        }
        i++;
    }

    printf("%s",input);
    return 0;
}
