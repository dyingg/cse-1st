#include <stdio.h>
#include <stdlib.h>

typedef struct COMPLEX {
    int real;
    int unreal;
} complex;

complex add(complex a, complex b) {
    complex sum;
    sum.real = a.real  + b.real;
    sum.unreal = a.unreal + b.unreal;
    return sum;
}

int main(void) {
	// your code goes here
	complex *a = (complex *)malloc(sizeof(complex));
	complex *b = (complex *)malloc(sizeof(complex));
	printf("Enter the first complex number:\n");
	scanf("%d %d", &a->real, &a->unreal);
	printf("Enter the second complex number:\n");
	scanf("%d %d", &b->real, &b->unreal);
	complex answer = add(*a,*b);
	printf("%d + %di", answer.real, answer.unreal);
	return 0;
}

