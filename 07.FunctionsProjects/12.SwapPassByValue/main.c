#include <stdio.h>
#include <stdlib.h>

void swap(int a,int b)
{

    int temp;
    temp = a;
    a = b;
    b = temp;
   printf("Swap in Func: %d %d\n",a,b);
}

int main()
{
    printf("Enter two number: ");
    int a,b;
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("Swap in Main: %d %d\n",a,b);


    return 0;
}
