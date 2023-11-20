#include<stdio.h>
int main()
    {
        int n,hr,min,sec;
        printf("Enter a time interval in seconds: ");
        scanf("%d",&n);
        hr = n/3600;
        n %= 3600;
        min = n/60;
        n %= 60;
        sec = n;

        printf("%d hour %d min %d second", hr,min,sec);

    }
