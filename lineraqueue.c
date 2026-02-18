#include <stdio.h>
#define SIZE 100

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (rear == SIZE-1) {
        printf("queue is full\n");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 || front > rear) {
        printf("queue is empty\n");
    } else {
        printf("dequeued element is %d\n", queue[front]);
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
}

void display(void)
{
    if (front == -1 || front > rear) {
        printf("queue is empty\n");
        return;
    }
    printf("queue elements are: ");
    for (int i = front; i <= rear; ++i) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void find(int x)
{
    if (front == -1 || front > rear) {
        printf("queue is empty\n");
        return;
    }
    int found = 0;
    for (int i = front; i <= rear; ++i) {
        if (queue[i] == x) {
            printf("element %d found\n", x);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("element %d not found\n", x);
    }
}

int main(void)
{
    char op;
    int x;

    while (1){
        printf("enter the operation\n1.enqueue\n2.dequeue\n3.display\n4.find\n5.exit\n");

        if (scanf(" %c", &op) != 1) {
            printf("invalid input\n");
            continue;
        }

        if (op == '5')
            break;

        switch (op) {
        case '1':
            printf("enter the element to enqueue: ");
            scanf("%d", &x);
                enqueue(x);
            
            break;
        case '2':
            dequeue();
            break;
        case '3':
            display();
            break;
        case '4':
            printf("enter the element to find: ");
            scanf("%d", &x);
            find(x);
            break;
        default:
            printf("invalid operation\n");
        }
    }

    return 0;
}