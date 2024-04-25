#include <stdio.h>
#include <stdlib.h>

int stringLength(char *input)
{
    int length=0;

    while(*input != '\0')
    {
        length++;
        input++;
    }
    return length;
}

int main()
{
    char input[30];
    printf("Enter a string: ");

    scanf("%[^\n]",input);

    int length = stringLength(input);

    printf("%d",length);


    return 0;
}
