#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,j;
	printf("Enter the number of rows:\n");
	scanf("%d",&n);
	for(i = 1; i <= n; i++) {
	    for(j = 1; j <= i; j++) {
	        printf("*");
	    }
	    printf("\n");
	}
	return 0;
}

