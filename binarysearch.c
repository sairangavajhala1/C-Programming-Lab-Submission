#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = (end + start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);
    
    int result = binarySearch(arr, n, target);
    
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found\n");
    
    return 0;
}