#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file;
    char ch[10];
    int age;
    char name[100]= " Welcome to C programming!";


    file = fopen("test.txt","r");

    if(file==NULL)
    {
        printf("FIle dosen't exist! ");
    }
    else
    {
        printf("File opened\n");
        while(!feof(file))
        {
            //ch = fgetc(file);

            fgets(ch,40,file);
            printf("%s\n",ch);
        }

        fclose(file);
    }
    return 0;

    scanf("%[^\n]",input);
}
