#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;

// Insert at front
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

// Find middle
int findMiddle() {
    struct node *slow = head, *fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

int main() {
    int n, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);
printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        insertFront(x);
    }

    printList();
    printf("\n");

    printf("Middle Element: %d", findMiddle());

    return 0;
}