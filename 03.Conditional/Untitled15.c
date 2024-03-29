#include<stdio.h>
int main()
    {
        int num,gues1,gues2,gues3,chances =3,flag=0;
        scanf("%d",&num);
        scanf("%d",gues1);
        flag-=1;

        if(num==gues1)
                {
                    printf("Right, Player 2 wins!");
                    flag =1;
                }
                else
                    {
                    chances--;
                    printf("Wrong, %d Chance(s) Left!",chances);
                    }


                    if(flag==0 && chances>0)
                    {
                        scanf("%d",&gues2);

                        if(gues2==num)
                        {
                            printf("Right, Player 2 wins!");
                            flag =1;
                        }
                        else
                        {
                            chances--;
                            printf("Wrong, %d Chance(s) Left!",chances);
                        }
                    }


    return 0;
    }
