#include <stdio.h>

int length(char * str) {
    int i;
    for(i = 0; str[i]; i++){};
    return i;
}


int main(void) {
	// your code goes here
	char str[50];
	scanf("%[^\t]", &str);
	printf("\nLength : %d", length(str));
	return 0;
}

