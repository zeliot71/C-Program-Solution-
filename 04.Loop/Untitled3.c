#include<stdio.h>
int main()
    {
        int n;
        scanf("%d",&n);

        for(int i =1; i<=n; i++)
        {
            switch(i%2==0)
            {
                case 0:
                    printf("1 ");
                    break;
                case 1:
                    printf("0 ");
                    break;
            }


        }
    }

