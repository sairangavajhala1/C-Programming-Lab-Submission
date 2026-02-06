#include <stdio.h>

int main() {
    int r, c;
    int A[10][10], B[10][10], R[10][10] = {0};
    int SA[50][3], SB[50][3], S[100][3];
    int i, j, a = 0, b = 0, k = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix A:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    printf("Enter matrix B:\n");    
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

    // Convert A to sparse
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            if(A[i][j] != 0) {
                SA[a][0] = i;
                SA[a][1] = j;
                SA[a][2] = A[i][j];
                a++;
            }

    // Convert B to sparse
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            if(B[i][j] != 0) {
                SB[b][0] = i;
                SB[b][1] = j;
                SB[b][2] = B[i][j];
                b++;
            }

    // Add sparse matrices
    i = j = 0;
    while(i < a && j < b) {
        if(SA[i][0] == SB[j][0] && SA[i][1] == SB[j][1]) {
            S[k][0] = SA[i][0];
            S[k][1] = SA[i][1];
            S[k][2] = SA[i][2] + SB[j][2];
            i++; j++;
        }
        else if(SA[i][0] < SB[j][0] ||
               (SA[i][0] == SB[j][0] && SA[i][1] < SB[j][1])) {
            S[k][0] = SA[i][0];
            S[k][1] = SA[i][1];
            S[k][2] = SA[i][2];
            i++;
        }
        else {
            S[k][0] = SB[j][0];
            S[k][1] = SB[j][1];
            S[k][2] = SB[j][2];
            j++;
        }
        k++;
    }

    // Copy remaining elements
    while(i < a) {
        S[k][0] = SA[i][0];
        S[k][1] = SA[i][1];
        S[k][2] = SA[i][2];
        i++; k++;
    }

    while(j < b) {
        S[k][0] = SB[j][0];
        S[k][1] = SB[j][1];
        S[k][2] = SB[j][2];
        j++; k++;
    }

    // Sparse to normal
    for(i = 0; i < k; i++)
        R[S[i][0]][S[i][1]] = S[i][2];

 printf  ("Resultant Matrix:\n");   
  for(i = 0; i < r; i++) {    
        for(j = 0; j < c; j++)
            printf("%d ", R[i][j]);
        printf("\n");
    }

    return 0;
}