#include <stdio.h>
#include <stdlib.h>

int vowelCount(char str[100])
{
    int i=0,count=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
        i++;
    }
    return count;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    int v = vowelCount(str);
    printf("%d",v);

    return 0;
}
