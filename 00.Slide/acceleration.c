#include<stdio.h>
int main()
{
    int speed,distance,time;
    scanf("%d%d%d",&speed,&distance,&time);

    float acceleration = (float)(2*(distance-speed*time)/(time*time));
    printf("Acceleration: %f\n",acceleration);
    if(acceleration>0)
    {
        printf("Speed Increasig!\n");
    }
    else if(acceleration<0)
    {
        printf("Speed is Deecreasing!");

    }
    else{
     printf("The car is moving at a constant speed!");
    }
}
