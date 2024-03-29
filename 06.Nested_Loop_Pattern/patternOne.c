#include <stdio.h>
int main() {
    int num = 2;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int count = 0;
        for(int j=1;j<2*n;j++){
            if(j <= n -i) printf(" ");
            else if(j >= n + i) printf(" ");
            else{
                printf("%d",num);
                count++;
                if(j < n || count == 2*i -1){
                    num += 2;
                }
                else if(j >= n){
                    num -= 2;
                }
            }
        }
        printf("\n");
    }

    return 0;
}
