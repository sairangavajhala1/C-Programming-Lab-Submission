#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char x) {
    if (top < MAX - 1) {
        stack[++top] = x;
    } else {
        printf("Stack overflow\n");
    }
}

char pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        printf("Stack underflow\n");
        return '\0';
    }
}

int precedence(char x) {
   if(x=='^')return 3;
   else if(x=='*' ||x=='/'|| x=='%') return 2;
   else if(x=='+' ||x=='-')return 1;
   else return 0;
}

int main() {
    char infix[MAX], postfix[MAX];
    int i = 0, j = 0;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    while (infix[i] != '\0') {

        // If operand, add to postfix
    if (isalnum(infix[i])) {
      postfix[j++] = infix[i];
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
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
