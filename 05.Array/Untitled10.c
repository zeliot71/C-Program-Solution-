#include<stdio.h>
int main()
    {
        int n,i,j,index;
        scanf("%d",&n);
        int arr[n];

        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        int search_value;
        printf("Enter which value youre searching for: ");
        scanf("%d",&search_value);

        int count=1;
        printf("Found at index position: ");
        for(i=0;i<=n;i++)
        {
            if(arr[i]==search_value)
            {
                printf("%d,",i);
                count=0;
            }
        }
        if(count)
        {
            printf("Not Found!");
        }
    }
