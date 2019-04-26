#include <stdio.h>

int main(void) {
	int n,i,j,flag = 0;
	int k = 0;
	scanf("%d", &n);
	
	for(i = 0; i < n;i++) {
	    
	    for(j = 0; j < n/2 - k; j++) {
	        printf(" ");
	    }
	    for(j = 0; j < 2*(k) + 1; j++) {
	        printf("*");
	    }
	    if(i > n/2 -1 ) {
	        flag = 1;
	    }
	    
	    if(!flag) {k++;}
	    else {k--;}
	    printf("\n");
	    
	}
	return 0;
}
