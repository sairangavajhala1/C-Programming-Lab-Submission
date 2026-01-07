#include <stdio.h>

void add(float a, float b) { printf("Result: %.2f\n", a + b); }
void sub(float a, float b) { printf("Result: %.2f\n", a - b); }
void mul(float a, float b) { printf("Result: %.2f\n", a * b); }
void div(float a, float b) { 
    if(b != 0) printf("Result: %.2f\n", a / b); 
    else printf("Error! Division by zero.\n"); 
}

int main() {
    int choice;
    float x, y;
    printf("1.Add 2.Sub 3.Mul 4.Div\nEnter choice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    switch(choice) {
        case 1: add(x, y); break;
        case 2: sub(x, y); break;
        case 3: mul(x, y); break;
        case 4: div(x, y); break;
        default: printf("Invalid choice");
    }
    return 0;
}