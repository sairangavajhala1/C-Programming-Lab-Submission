#include <stdio.h>

int main() {
    int a[100], i, n;
    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }


    for (i = 0; i < n; i++) {
        sum += a[i];
    }

    printf("Total sum of elements: %d", sum);

    return 0;
}
