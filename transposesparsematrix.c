#include <stdio.h>

int main() {
    int matrix[10][10];
    int sparse[50][3], transposespar[50][3];
    int rowTerms[10], startPos[10];
    int i, j, k = 1;
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

 
    sparse[0][0] = r;
    sparse[0][1] = c;
    sparse[0][2] = 0;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (matrix[i][j] != 0) {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];
                k++;
                sparse[0][2]++;
            }
        }
    }


    transposespar[0][0] = sparse[0][1];
    transposespar[0][1] = sparse[0][0];
    transposespar[0][2] = sparse[0][2];

    for (i = 0; i < c; i++)
        rowTerms[i] = 0;

    for (i = 1; i <= sparse[0][2]; i++)
        rowTerms[sparse[i][1]]++;

    startPos[0] = 1;
    for (i = 1; i < c; i++)
        startPos[i] = startPos[i - 1] + rowTerms[i - 1];

    
    for (i = 1; i <= sparse[0][2]; i++) {
        j = startPos[sparse[i][1]]++;
        transposespar[j][0] = sparse[i][1];
        transposespar[j][1] = sparse[i][0];
        transposespar[j][2] = sparse[i][2];
    }


    printf("\n  ORIGINAL MATRIX  \n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

  
    printf("\n  TRANSPOSED MATRIX  \n");
    int transposed[10][10] = {0};  
  
    for (i = 1; i <= transposespar[0][2]; i++) {
        transposed[transposespar[i][0]][transposespar[i][1]] = transposespar[i][2];
    }
    
    
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d\t", transposed[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}
