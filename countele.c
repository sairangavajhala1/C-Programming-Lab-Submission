#include <stdio.h>

int main() {
    int n, key;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements: ");
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched: ");
    scanf("%d", &key);
    

    int low = 0, high = n-1, lastIndex = -1;
    while (low <= high) {
        int mid = (low+high)/ 2;
        if (a[mid] <= key) {
            lastIndex = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    int count = lastIndex + 1; 
    printf("the count of elements less than or equal to %d is %d\n", key, count);
    
    return 0;
}