#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];
    char wrd[50];
    printf("Enter string: ");
    scanf(" %[^\n]",str);

    printf("Enter sub string: ");
    scanf(" %[^\n]",wrd);
    int i,j,count=0;
    int pos=-1;
    for(i=0;str[i]!='\0';i++){
            int found =1;
        if(str[i]==wrd[0]){
             for(j=1;wrd[j]!='\0';j++){
               if(str[i+j]!=wrd[j]){
                   found=0;
                       break;
                       }
                    }
        if(found){
            //pos=i;
            count++;
                i = i+strlen(wrd)-1;
             }
         }
      }
    if(count>0)
    {
        printf("%d",count);
    }
    else{
        printf("Not found!");
    }


    return 0;
}
