#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    file = fopen("test.txt","w");

    if(file==NULL)
    {
        printf("FIle dosen't exist! ");
    }
    else
    {
        printf("File opened");
        fclose(file);
    }
    return 0;
}
