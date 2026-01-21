#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex c1, c2, sum, mul;

    printf("Enter first complex number:\n");
    printf("Real part: ");
    scanf("%f", &c1.real);
    printf("Imaginary part: ");
    scanf("%f", &c1.imag);

    printf("\nEnter second complex number:\n");
    printf("Real part: ");
    scanf("%f", &c2.real);
    printf("Imaginary part: ");
    scanf("%f", &c2.imag);

    // Addition
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    // Multiplication
    mul.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    mul.imag = (c1.real * c2.imag) + (c1.imag * c2.real);

    printf("\nSum = %.2f + %.2fi", sum.real, sum.imag);
    printf("\nProduct = %.2f + %.2fi\n", mul.real, mul.imag);

    return 0;
}
