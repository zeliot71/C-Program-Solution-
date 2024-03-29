#include<stdio.h>
#include<math.h>
int main()
    {
        int i,x,y;
        int x1=x;
        scanf("%d%d",&x,&y);


                while(x!=y)
                {
                    printf("%d, ",x*x);

                    if(x<y)
                    {
                        pow(x1,2);
                        x++;
                    }
                    else if(x>y)
                    {
                        pow(x1,2);
                        x--;
                    }
                }
                printf("Reached!");

    }
