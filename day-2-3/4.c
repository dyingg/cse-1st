#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,j;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
	    for(j = 0; j < n/2 - i + 1; j++) {
	        printf(" ");
	    }
	    for(j = 0; j < i+1; j++) {
	        printf("* ");
	    }
	    printf("\n");
	}
	return 0;
}

