#include<stdio.h>
int main()
    {
        int x,n_tries,guess_num,count=3;

        printf("Enter a number: ");
        scanf("%d",&x);
        while(count!=0)
            {
                printf("Guess the number: ");
                scanf("%d",&guess_num);
                count--;
                if(x==guess_num)
                {
                    printf("Player 2 won!\n");
                    break;
                }
                else{
                    printf("%d chance left!\n",count);
                }

            }
             if(count==0 && x!=guess_num)
                printf("Player 1 wins!");


    }
