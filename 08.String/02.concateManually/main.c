#include <stdio.h>
#include <stdlib.h>
int strLen(char str2[100]){
    int i=0,len=0;
    while(str2[i]!='\0')
    {
        len++;
        i++;
    }
    return len;
}
void strCat(char str1[100],char str2[100]){
    int j=0, size=strLen(str1);
    while(str2[j]!='\0')
    {
        str1[size+j]=str2[j];
        j++;
    }
    str1[size+j]='\0';
    printf("String after concatetion: %s",str1);
}
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter string1: ");
    fgets(str1,100,stdin);
    printf("Enter string2: ");
    fgets(str2,100,stdin);
    //int len = strlen(str1);
    //printf("string 1: %s %d\nString 2: %s %d",str1,strlen(str1),str2,strlen(str2));
    int size = strLen(str2);
    strCat(str1,str2);




    return 0;
}
