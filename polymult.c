#include <stdio.h>

int main() {
    int p1[10], p2[10], res[20] = {0};
    int d1, d2, i, j;
printf("Enter degree of first polynomial: ");
    scanf("%d", &d1);
    printf("Enter coefficients of first polynomial (from highest degree to lowest): ");
    for(i = d1; i >= 0; i--)
        scanf("%d", &p1[i]);
printf("Enter degree of second polynomial: ");
    scanf("%d", &d2);
    printf("Enter coefficients of second polynomial (from highest degree to lowest): ");    
    for(i = d2; i >= 0; i--)
        scanf("%d", &p2[i]);

    for(i = 0; i <= d1; i++)
        for(j = 0; j <= d2; j++)
            res[i + j] += p1[i] * p2[j];
printf("Result of multiplication: ");
    for(i = d1+d2; i >= 0; i--)
        printf("%dx^%d+ ", res[i], i);

    return 0;
}
