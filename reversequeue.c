#include<stdio.h>
#define MAX 100

int main(){
 int capacity;
 int queue[MAX];
    int stack[MAX];
    int top = -1;
    int front = 0;
    int rear = -1;
    printf("Enter the capacity of the queue: ");
    scanf("%d", &capacity);

 for(int i = 0; i < capacity; i++) {
        scanf("%d", &queue[i]);
    }

    printf("original queue:");
    for(int i=0;i<capacity;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");

    for(int i=0;i<capacity;i++){
        stack[++top]=queue[i];
    }
//updating the queu directly without other queue or other ds
    for(int i = 0; i < capacity; i++) {
        queue[i] = stack[top--];
    }
printf("reversed queue:");
for (int i=0; i<capacity; i++) {
    printf("%d ",queue[i]);
}
printf("\n");

return 0;
}