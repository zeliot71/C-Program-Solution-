#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file;
    char name[40];
    int age;
    //char name[100]= " Welcome to C programming!";


    file = fopen("test.txt","r");

    if(file==NULL)
    {
        printf("FIle dosen't exist! ");
    }
    else
    {
        printf("File opened\n");

            //ch = fgetc(file);
            //fgets(ch,39,file);
            fscanf(file,"%s",&name);

            printf("%s",name);

        fclose(file);
    }
    return 0;
}
