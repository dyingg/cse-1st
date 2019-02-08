//Quick rough solution using 2 loops
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int i,j;
    int k = 0;
    int flag = 0;
    for(i = 0; i <n; i++) {

        for(j = 0; j <= n; j++) {
            if(j == (n)/2 - k || j == (n)/2 + k) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        if(!flag){ k++;}
            else {k--;};
        if(k == (n)/2) {
            flag = 1;
        }
        printf("\n");
    }
}
