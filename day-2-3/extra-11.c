#include<stdio.h>

int main() {
    int n,i;
    printf("Enter the number\n");
    scanf("%d", &n);
    if(n < 0) {
        printf("Factorial undefined!");
        return -1;
    }
    int fact = 1;
    for(i = 2; i <= n; i++) {
        fact *= i;
    }
    printf("%d! = %d",n,fact);
    
    return 0;
}
