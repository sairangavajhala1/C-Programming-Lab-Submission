#include <stdio.h>

int main() {
    int N;
    printf("enter the number of elements: ");
    scanf("%d", &N);
    int arr[N];
    printf("enter the elements: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int X;
    printf("enter the target value: ");
    scanf("%d", &X);

    int low = 0, high = N - 1, index = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == X) {
            index = mid;
            break;
        } else if (arr[mid] < X) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (index != -1) {
        printf("The target value %d is present at index %d\n", X, index);
    } else {
        printf("The target value %d is not present in the array\n", X);
    }
    
    return 0;
}