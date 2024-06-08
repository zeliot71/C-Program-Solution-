#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file;
    int age;
    char name[100]= " Welcome to C programming!";


    file = fopen("test.txt","w");

    if(file==NULL)
    {
        printf("FIle dosen't exist! ");
    }
    else
    {
        printf("File opened\n");
        printf("Enter your Full name: ");
        gets(name);
        printf("Enter your age: ");
        scanf("%d",&age);

        fprintf(file,"Name: %s\nAge:%d",name,age);

        printf("File is written successfully! \n");

        fclose(file);
    }
    return 0;
}
