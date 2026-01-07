#include <stdio.h>

int findGCD(int a, int b) {
    if (b == 0) return a;
    return findGCD(b, a % b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD is %d", findGCD(a, b));
    return 0;
}