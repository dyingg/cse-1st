#include <stdio.h>


int length(char * str) {
    int i;
    for(i = 0; str[i]; i++){};
    return i;
}

void concat(char * source, char * dest) {
    int dLen = length(dest);
    int sLen = length(source);
    int i;
    for(i = dLen; i - dLen <= sLen; i++) {
        dest[i] = source[i- dLen];
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
	concat(a,b);
	print(b);
	
	return 0;
}

World
Hello 
Hello World
