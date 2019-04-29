#include <stdio.h>


int length(char * str) {
    int i;
    for(i = 0; str[i]; i++){};
    return i;
}
int isalp(char s) {
    if((s >= 65 && s<= 90) || (s >= 97 && s<= 122)) {
        return 1;
    }
    return 0;
}

void rem(char * str) {
    int i,j;
    int len = length(str);
    for(i = 0,j=0; i < len; i++) {
        if(isalp(str[i])) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

void print(char * str) {
    int i;
    for(i = 0; i < length(str); i++)
        printf("%c", str[i]);
}


int main(void) {
	// your code goes here
	char a[50];
	scanf("%[^\n]", &a);
	rem(a);
	print(a);
	
	return 0;
}


//Hello!@ World                                                                                                                                  
//HelloWorld  
