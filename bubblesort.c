#include <stdio.h>

int main() {
    int n;
    printf("number of tv channels: ");
    scanf("%d", &n);
    int channel[n];

    printf("enter the channels: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &channel[i]);
    }

    for (int i=0;i<=n-1;i++) {
        for (int j = 0;j< n-i-1;j++) {
            if (channel[j] > channel[j + 1]) {
                int temp = channel[j];
                channel[j] = channel[j + 1];
                channel[j + 1] = temp;
            }
        }
    }

    printf("after sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", channel[i]);
    }
    printf("\n");

    return 0;
}