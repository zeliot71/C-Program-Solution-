#include <stdio.h>
#include <stdlib.h>


int strLen(char *name,int n){
    int i=0, len =0;
   while(name[i]!='\0')
   {
       len++;i++;
   }
    return len;
}
int main()
{
    int n=20;
    char name[n];
    printf("Enter your name: ");
    scanf("%[^\n]", &name);

    printf("User define function: %d\n",strLen(name,n));
    printf("function library: %d\n",strlen(name));
    return 0;
}
