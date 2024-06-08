#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file;
    char name[100]= " Welcome to C programming!";


    file = fopen("test.txt","w");

    if(file==NULL)
    {
        printf("FIle dosen't exist! ");
    }
    else
    {
        printf("File opened\n");
        printf("Enter your Full name: \n");
        gets(name);

        fputs(name,file);
        printf("File is written successfully! \n");

        fclose(file);
    }
    return 0;
}
