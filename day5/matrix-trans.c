/***
Enter the order of matrix:
2 2
Enter  matrix:
3 9
8 5
Transpose Matrix:
3 8 
9 5 

***/


#include <stdio.h>
#include <stdlib.h>

int ** dynarr(int rows, int cols) {
    int ** mat = (int **)malloc(sizeof(int *) * rows);
    int i,j;
    for(i = 0; i < rows; i++)
        mat[i] = (int *)malloc(sizeof(int) * cols);
        
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++) 
            scanf("%d", &mat[i][j]);
            
    return mat;
}

void print(int **arr, int n, int m) {
    int i,j;
    for(i = 0; i<n; i++){
        for(j = 0; j < m; j++) {
            printf("%d ", arr[j][i]);
        }
         printf("\n");
    }
        
}



int main() {
    int m,n;
    printf("Enter the order of matrix:\n");
    scanf("%d %d", &m,&n);
    printf("Enter  matrix:\n");
    int ** arr1 = dynarr(m,n);
    printf("Transpose Matrix:\n");
    print(arr1, m,n);
    return 0;
    
}


