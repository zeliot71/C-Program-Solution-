#include<stdio.h>
int main()
    {
        int n,i,j;
        float a,hw,ct,mt,tf,sum=0;
        scanf("%d",&n);
        float marks[5];

        for(i=0;i<n;i++)
        {
            for(j=0;j<5;j++)
            {
                scanf("%f",&marks[j]);
                sum+=marks[i];

            }
             if(sum>=90 && sum<=100)
            printf("A");
                    else if(sum>=86&& sum<=89)
                        printf("A-");
                    else if(sum>=82&& sum<=85)
                        printf("B+");
                    else if(sum>=78&& sum<=81)
                        printf("B");
                    else if(sum>=74&& sum<=77)
                        printf("B-");
                    else if(sum>=70&& sum<=73)
                        printf("C+");
                    else if(sum>=66&& sum<=69)
                        printf("C");
                    else if(sum>=62&& sum<=65)
                        printf("C-");
                    else if(sum>=58&& sum<=61)
                        printf("D+");
                    else if(sum>=55&& sum<=57)
                        printf("D");
                    else if(sum<55)
                        printf("F");
        }




    }
