#include<stdio.h>
int main()
    {
        int a,b;
        printf("Enter the value of a and b: ");
        scanf("%d %d", &a,&b);

        printf("%d+%d =%d \n %d-%d=%d \n %d*%d=%d \n %d/%d=%d \n %d %% %d=%d", a,b,a+b,a,b,a-b,a,b,a*b,a,b,a/b,a,b,a%b);
    }
