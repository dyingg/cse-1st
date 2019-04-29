#include <stdio.h>

int length(char * str) {
    int i;
    for(i = 0; str[i]; i++){};
    return i;
}

int checkpalindrome(char * str) {
    int i, len = length(str);
    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len - i -1]) {
            printf("Not a palindrome");
            return 0;
        }
        
        
    }
    printf("Palindrome!");
    return 1;
    
}

int main(void) {
	// your code goes here
	char str[50];
	scanf("%[^\t]", &str);
	checkpalindrome(str);
	return 0;
}

