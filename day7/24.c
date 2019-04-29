#include <stdio.h>

int length(char * str) {
    int i;
    for(i = 0; str[i]; i++){};
    return i;
}

void printRev(char * str) {
    int i, len = length(str);
    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main(void) {
	// your code goes here
	char str[50];
	scanf("%[^\t]", &str);
	printRev(str);
	return 0;
}

