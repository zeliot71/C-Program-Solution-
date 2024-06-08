#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char name[20];
    int age,Id,Phone,n;

    file = fopen("student.txt","a");

    if(file==NULL)
    {
        printf("File dosen't exist!");
    }
    else
    {
        printf("File is opened\n");

        printf("Enter number of students: ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            printf("Enter Student ID: ");
            scanf("%d",&Id);

            printf("Enter Student Name: ");
            scanf("%s",&name);

            printf("Enter Student Age: ");
            scanf("%d",&age);

            printf("Enter Contact Number: ");
            scanf("%d",&Phone);

            fprintf(file,"\n%d\t%s\t\t%d\t%d",Id,name,age,Phone);

        }


        fclose(file);
    }

    return 0;
}
