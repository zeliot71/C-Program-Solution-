#include<stdio.h>
#include<math.h>


int main()
    {
        int a,b,c;
        printf("Enter the coefficients of the quadratic equation: \n");
        scanf("%d%d%d",&a,&b,&c);

        double x1,x2;
        int determinant = pow(b,2)-4*a*c;


        if(determinant>0)
        {
            x1 = (-b+ sqrt(determinant))/(2*a);
            x2 = (-b- sqrt(determinant))/(2*a);
            printf("x1: %lf\n x2: %lf",x1,x2);
        }
        else if(determinant==0)
        {
            x1 = x2 = -b/(2*a);
            printf("x1: %lf\n x2: %lf",x1,x2);
        }
        else
            {
                /*double real,imaginary;
                real = (double)(-b/(2*a));
                imaginary = (double)(-b/(2*a));

                printf("x1: %lf+ %lf i\n",real,imaginary);
                printf("x2: %lf- %lf i\n",real,imaginary);*/
                printf("Imaginary!");


            }
    }
