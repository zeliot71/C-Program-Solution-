//problem 7; Assignment operation, Type casting

#include<stdio.h>
int main()
    {
        int x,x1,x2;
        float y,y1,y2;
        x = -150;
        y = 123.125;

        x1 = y;
        y1 = x;
        printf("Assignment: %f assigned to an int produces %d\n",y,x1);
        printf("Assignment: %d assigned to an int produces %f\n",x,y1);

        y2 = (int)x;
        x2 = (float)y;
        printf("Type Casting: (float) %f produces %d\n",y,x2);
        printf("Type Casting: (int) %d produces %f\n",x,y2);

    }
