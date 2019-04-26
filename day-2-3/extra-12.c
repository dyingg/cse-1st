#include<stdio.h>

int main() {
    int n;
    printf("Enter the year\n");
    scanf("%d", &n);
    if(!(n % 4) && ((!n % 100 && !n % 400) || n % 100)) {
        printf("The given year is a leap year\n");
        return 0;
    }
    printf("The given year is not a leap year\n");
    return 0;
}

//1900
//Enter the year
//The given year is not a leap year
