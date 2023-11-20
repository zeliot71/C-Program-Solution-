#include<stdalign.h>
#include<math.h>
int main()
    {
        double u,a,s,v;
        printf("Enter the values of u,a and s: ");
        scanf("%lf %lf %lf", &u,&a,&s);

        v = sqrt(u*u+2*a*s);
        printf("v = %.2lf",v);

        return 0;
    }
