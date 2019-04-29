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



void freq(char * str) {
    int freqtable[52] = {0};
    int i;
    int len = length(str);
    for(i = 0; i < len; i++) {
        if(isalp(str[i])) {
            char s = str[i];
            if((s >= 65 && s<= 90)) {
                freqtable[s - 65]++;
            }
            else if((s >= 97 && s<= 122)) {
                freqtable[s - 71]++;
            }
           
        }
    }
    for(i = 0; i <= 26; i++) {
        if(freqtable[i] > 0) {
            printf("%c - %d\n", i + 65 , freqtable[i]);
        }
    }
     for(i = 27; i < 52; i++) {
        if(freqtable[i] > 0) {
            printf("%c - %d\n", i + 71 , freqtable[i]);
        }
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
	scanf("%[^\n]", &a);
	freq(a);
	
	return 0;
}

//zzZZ
Z - 2
z - 2
