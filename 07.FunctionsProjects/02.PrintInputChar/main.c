#include <stdio.h>
#include <stdlib.h>

char printChar(char a)
{
    printf("Value received from main: %c",a);
}
int main()
{
    char a;
    scanf("%c",&a);

    printChar(a);

}
