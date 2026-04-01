#include <stdio.h>

void merge(int arr[], int i, int m, int j) {
    int n1 = m - i + 1;
    int n2 = j - m;

    int L[n1], R[n2];

    for (int k = 0; k < n1; k++) {
        L[k] = arr[i + k];
    }

    for (int k = 0; k < n2; k++) {
        R[k] = arr[m + 1 + k];
    }

    int k = i;
    int p1 = 0, p2 = 0;

    while (p1 < n1 && p2 < n2) {
        if (L[p1] < R[p2]) {
            arr[k] = L[p1];
            p1++;
        } else {
            arr[k] = R[p2];
            p2++;
        }
        k++;
    }

    while (p1 < n1) {
        arr[k] = L[p1];
        p1++;
        k++;
    }

    while (p2 < n2) {
        arr[k] = R[p2];
        p2++;
        k++;
    }
}

void mergesort(int arr[], int i, int j) {
    if (i < j) {
        int m = (i + j) / 2;
        mergesort(arr, i, m);
        mergesort(arr, m + 1, j);
        merge(arr, i, m, j);
    }
}

int main() {
    int n;

    printf("Enter the number of age values in each dataset: ");
    scanf("%d", &n);

    int arr[2 * n];

    printf("Enter the ages of participants in John's dataset (in ascending order): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the ages of participants in Mary's dataset (in descending order): ");
    for (int i = n; i < 2 * n; i++) {
        scanf("%d", &arr[i]);
    }

    mergesort(arr, 0, 2 * n - 1);

    printf("Merged and sorted age data in ascending order: ");
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}