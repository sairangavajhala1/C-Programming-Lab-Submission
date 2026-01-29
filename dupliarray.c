#include <stdio.h>

int main() {
    int a[100], i, j, n, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                break;  
            }
        }
    }

    printf("Total number of duplicate elements: %d\n", count);

    return 0;
}
