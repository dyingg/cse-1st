#include <stdio.h>


int length(char * str) {
    int i;
    for(i = 0; str[i]; i++){};
    return i;
}

void copy(char  * source, char  * dest) {
    int len = length(source);
    int i;
    for(i = 0; i < len; i++) {
        dest[i] = source[i];
    }
}

void print(char * str) {
    int i;
    for(i = 0; i < length(str); i++)
        printf("%c", str[i]);
}

int main(void) {
	// your code goes here
	char a[50];
	char b[50];
	scanf("%[^\n]", &a);
	getchar();
	scanf("%[^\n]", &b);
	copy(a,b);
	print(b);
	
	return 0;
}

