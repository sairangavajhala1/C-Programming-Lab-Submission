#include <stdio.h>

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int pi = i + 1;

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    int n;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    int books[n];

    printf("Enter the book identifiers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &books[i]);
    }

    quicksort(books, 0, n - 1);

    printf("The sorted book identifiers are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", books[i]);
    }

    return 0;
}