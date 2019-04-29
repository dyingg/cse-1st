/**
Enter the order of 1st matrix:
2 2
Enter the order of 2nd matrix:
22  2
Enter first matrix:
1 2
3 4
Enter second matrix:
3 4
5 6
Computed array:
13 16 
29 36 
**/

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

void print(int **arr, int n, int m, int k) {
    int i,j;
    for(i = 0; i<n; i++){
        for(j = 0; j < m; j++) {
            printf("%d", arr[i][j]);
        }
         printf("\n");
    }
        
}

void product(int **arr1, int **arr2, int m, int n, int k) {
    int i,j,l;
    for(i = 0; i<m; i++){
        
        for(j = 0; j < k; j++) {
            int term = 0;
            for(l = 0; l < n; l++) {
                term += arr1[i][l] * arr2[l][j];
            }
            printf("%d ", term);
        }
         printf("\n");
    }
}


int main() {
    int m,n,p,q;
    printf("Enter the order of 1st matrix:\n");
    scanf("%d %d", &m,&n);
    printf("Enter the order of 2nd matrix:\n");
    scanf("%d %d", &p,&q);
    if(n != p) {
        printf("product not defined!\n");
        return -1;
    }
    printf("Enter first matrix:\n");
    int ** arr1 = dynarr(m,n);
     
    printf("Enter second matrix:\n");
    int ** arr2 = dynarr(p,q);
    printf("Computed array:\n");
    product(arr1,arr2,m,n,q);
    return 0;
    
}

