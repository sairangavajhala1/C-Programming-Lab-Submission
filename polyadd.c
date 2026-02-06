#include <stdio.h>

int main() {
    int p1[10], p2[10], sum[10];
    int d, i;

    printf("Enter highest degree: ");
    scanf("%d", &d);

    printf("\nEnter %d coefficients for Polynomial 1 (from x^%d to x^0):\n", d+1, d);
    for(i = d; i >= 0; i--) {
        printf("Coefficient of x^%d: ", i);
        scanf("%d", &p1[i]);
    }

    printf("\nEnter %d coefficients for Polynomial 2 (from x^%d to x^0):\n", d+1, d);
    for(i = d; i >= 0; i--) {
        printf("Coefficient of x^%d: ", i);
        scanf("%d", &p2[i]);
    }

    for(i = 0; i <= d; i++)
        sum[i] = p1[i] + p2[i];

    printf("\nResultant Polynomial:\n");
    for(i = d; i >= 0; i--) {
        if(sum[i] != 0) {
            printf("%d", sum[i]);
            if(i > 0) printf("x^%d + ", i);
        }
    }

    return 0;
}