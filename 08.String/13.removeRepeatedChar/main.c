#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[50];
    printf("Enter the string: ");
    scanf("%[^\n]",input);
    //printf("%s",input);

    int i,j,k;

    for(i=0;input[i]!='\0';i++)
    {
        if(input[i]!='\0')
        {
            for(j=i+1;input[j]!='\0';j++)
            {
                if(input[i]==input[j])
                {
                        for(k=j;input[k]!='\0';k++)
                        {
                            input[k]=input[k+1];

                        } j--;
                }
            }

        }

    }
    printf("%s",input);

    return 0;
}
