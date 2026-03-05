#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* create(struct node* head, int x){
    struct node *temp, *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;

    if(head == NULL){
        head = newnode;
        newnode->next = head;
        return head;
    }

    temp = head;
    while(temp->next != head)
        temp = temp->next;

    temp->next = newnode;
    newnode->next = head;

    return head;
}

struct node* insertPos(struct node* head, int val, int pos){
    struct node *temp=head;
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;

    for(int i=1;i<pos-1;i++)
        temp = temp->next;

    newnode->next = temp->next;
    temp->next = newnode;

    return head;
}

void display(struct node* head){
    struct node* temp=head;

    if(head==NULL) return;

    do{
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=head);
}

int main(){
    int n,x,val,pos;
    struct node* head=NULL;
printf("Enter number of elements: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&x);
        head=create(head,x);
    }
printf("Enter value and position to insert: ");
    scanf("%d",&val);
    scanf("%d",&pos);

    head=insertPos(head,val,pos);

    display(head);
}