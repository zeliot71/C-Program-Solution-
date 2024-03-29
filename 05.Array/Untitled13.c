#include<stdio.h>
int main()
    {
        int n,i;
        scanf("%d",&n);

        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        int pos;
        printf("Which Pos of the value you want to delete: ");
        scanf("%d",&pos);
        for(i=pos-1;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
        for(i=0;i<n-1;i++)
        {
            printf("%d ",arr[i]);
        }
    }
