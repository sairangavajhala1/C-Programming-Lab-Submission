#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1;
int rear = -1;  
void enqueue(int x){
    if((rear+1)%SIZE ==front){
        printf("queue is full\n");
    }else{
        if(front==-1)
        front=0;
        rear=(rear+1)%SIZE;
        queue[rear]=x;
    }
    }
 void dequeue(){
    if(front==-1){
        printf("queue is empty\n");
    }else{
        printf("dequeued element is %d\n",queue[front]);
        if(front==rear){
            front=rear=-1;
        }else{
            front=(front+1)%SIZE;
        }
    }
  }

  void display(){
    if(front==-1){
        printf("queue is empty\n");
    }else{
        int i=front;
        for(;i!=rear;){
            printf("%d ",queue[i]);
            i=(i+1)%SIZE;
        }
        printf("%d\n",queue[rear]);
    }
  }

  void find(int x){
    if(front==-1){
        printf("queue is empty\n");
        return;
    }
    int i=front;
    int found=0;
    while(i!=rear){
        if(queue[i]==x){
            printf("element %d found\n",x);
            found=1;
            break;
        }
        i=(i+1)%SIZE;
    }
    if(queue[rear]==x){
        printf("element %d found\n",x);
        found=1;
    }
    if(!found){
        printf("element %d not found\n",x);
    }
  }
 int main(){
  int x;
  char choice;
 
  while (1){
        printf("enter the choice:\n1.enqueue\n2.dequeue\n3.display\n4.find\n5.exit\n");

        if (scanf(" %c", &choice) != 1) {
            printf("invalid input\n");
            continue;
        }

        if (choice == '5')
            break;
            
    switch(choice){
        case '1':
        printf("enter the element to be enqueued\n");
        scanf("%d",&x);
      
        enqueue(x);
        break;
        case '2':
        dequeue();
        break;
        case '3':
        display();
        break;
        case '4':
        printf("enter the element to find\n");
        scanf("%d",&x);
        find(x);
        break; 
       
}}

 
  
    return 0;}
