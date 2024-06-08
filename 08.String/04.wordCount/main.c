#include <stdio.h>
#include <stdlib.h>

int wordCount(char str[100])
{
    int i=0,count=0,inWord=0;

    while(str[i]!='\0')
    {
        if(str[i]==' '||str[i]=='\t'||str[i]=='\n')
        {
            inWord=0;
        }else{
            if(!inWord){
                count++;
                inWord=1;
            }
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
    int nmbrOFwords = wordCount(str);
    printf("%d",nmbrOFwords);

    return 0;
}
