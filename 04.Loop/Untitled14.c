#include<stdio.h>
int main()
    {
        int i,n,r,factN=1,factR=1,defNr=0,factDefNR=1,ncr=0;
        scanf("%d%d",&n,&r);
        defNr=n-r;

        if(n>=r)
        {
            for(i=1;i<=n;i++)
            {
                factN*=i;
            }
            for(i=1;i<=r;i++)
            {
                factR*=i;
            }
            for(i=1;i<=defNr;i++)
            {
                factDefNR*=i;
            }
            ncr =factN/(factR*factDefNR);
            printf("%d",ncr);
        }
        else
        {
            printf("n Is greater than or equals r!");
        }


    }
