#include <stdio.h>
#include <ctype.h>

int stack[100];
int top = -1;

// Push function
void push(int x) {
    stack[++top] = x;
}

// Pop function
int pop() {
    return stack[top--];
}

int main() {
    char postfix[100];
    int i = 0;
    int a, b, result;

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    while(postfix[i] != '\0') {

        // If operand, push into stack
        if(isdigit(postfix[i])) {
            push(postfix[i] - '0');  // convert char to integer
        }
        else {
            // Pop two operands
            b = pop();
            a = pop();

            switch(postfix[i]) {
                case '+': result = a + b; break;
                case '-': result = a - b; break;
                case '*': result = a * b; break;
                case '/': result = a / b; break;
            }

            // Push result back
            push(result);
        }

        i++;
    }

    printf("Result = %d\n", pop());

    return 0;
}