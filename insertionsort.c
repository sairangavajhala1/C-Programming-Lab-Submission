#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Enter the number of lockers: ");
    scanf("%d", &n);

    int lockers[n];

    printf("Enter the locker numbers: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &lockers[i]);
    }

    // Insertion sort in descending order
    for (i = 1; i < n; i++) {
        temp = lockers[i];
        j = i - 1;

        while (j >= 0 && lockers[j] < temp) {
            lockers[j + 1] = lockers[j];
            j--;
        }

        lockers[j + 1] = temp;
    }

    printf("Locker numbers in descending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", lockers[i]);
    }

    return 0;
}