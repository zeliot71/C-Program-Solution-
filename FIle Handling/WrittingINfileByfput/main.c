#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file;
    char name[100]= " Welcome to C programming!";


    int i;
    int len = strlen(name);
    file = fopen("test.txt","a");

    if(file==NULL)
    {
        printf("FIle dosen't exist! ");
    }
    else
    {
        printf("File opened\n");
        for(i=0;i<len;i++)
        {
            fputc(name[i],file);
        }
        printf("File is written successfully!\n");



        fclose(file);
    }
    return 0;
}
