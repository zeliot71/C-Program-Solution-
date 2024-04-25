#include <stdio.h>
#include <stdlib.h>

int powerOFx(int x,int y)
{
    int result=1;
    for(int i=1;i<=y;i++)
    {
        result *=x;
    }
    return result;
}

int main()
{
    int x,y;
    printf("Enter the base: ");
    scanf("%d",&x);
    printf("Enter the power: ");
    scanf("%d",&y);

    int resultOFpower = powerOFx(x,y);
    printf("%d to the power %d is %d",x,y,resultOFpower);
    return 0;
}
