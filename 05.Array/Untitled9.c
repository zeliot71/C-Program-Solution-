#include<stdio.h>
int main()
    {
        int n,i,count=0;
        scanf("%d",&n);
        char array[n];

        for(i=0;i<n;i++)
        {
            scanf(" %c",&array[i]);
            if (array[i] == 'A' || array[i] == 'E' || array[i] == 'I' || array[i] == 'O' || array[i] == 'U' ||
            array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u')
            {
            count++;
            }
        }
        printf("Count: %d",count);
    }
