#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push
void push(char x) {
    stack[++top] = x;
}

// Pop
char pop() {
    return stack[top--];
}


int precedence(char x) {
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    if (x == '^') return 3;
    return 0;
}

int main() {
    char infix[MAX], postfix[MAX];
    int i = 0, j = 0;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    while (infix[i] != '\0') {

        // If operand → add to postfix
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        }

        // If '(' → push
        else if (infix[i] == '(') {
            push(infix[i]);
        }

        // If ')'
        else if (infix[i] == ')') {

            // Pop until '(' found
            while (top != -1 && stack[top] != '(') {
                postfix[j++] = pop();
            }

            // If no '(' found printf error
            if (top == -1) {
                printf("Error: Mismatched Parentheses!\n");
                return 0;
            }

            pop(); 
        }

        // If operator
        else {
            while (top != -1 &&
                   precedence(stack[top]) >= precedence(infix[i])) {
                postfix[j++] = pop();
            }
            push(infix[i]);
        }

        i++;
    }

    // Pop remaining operators
    while (top != -1) {
if (stack[top] == '(') {
            printf("Error: Mismatched Parentheses!\n");
            return 0;
        }

        postfix[j++] = pop();
    }
 postfix[j] = '\0';
    printf("Postfix expression: %s\n", postfix);
    return 0;
}
