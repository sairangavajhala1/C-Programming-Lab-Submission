#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;

// Insert at beginning
void insertFront(int x) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = head;
    head = newNode;
}

// Print list
void printList() {
    struct node* temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

// Reverse list
void reverseList() {
    struct node *prev = NULL, *curr = head, *next = NULL;

    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
}

int main() {
    int n, x;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        insertFront(x);
    }

    printList();
    printf("\n");

    reverseList();
    printList();

    return 0;
}