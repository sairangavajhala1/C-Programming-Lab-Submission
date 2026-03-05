#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* create(struct node* head,int x){
    struct node *temp,*newnode;

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;

    if(head==NULL){
        head=newnode;
        newnode->next=head;
        return head;
    }

    temp=head;
    while(temp->next!=head)
        temp=temp->next;

    temp->next=newnode;
    newnode->next=head;

    return head;
}

struct node* deleteLast(struct node* head){
    struct node *temp=head,*prev=NULL;

    if(head==NULL) return head;

    while(temp->next!=head){
        prev=temp;
        temp=temp->next;
    }

    prev->next=head;
    free(temp);

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
    int n,x;
    struct node* head=NULL;
printf("Enter number of elements: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&x);
        head=create(head,x);
    }

    head=deleteLast(head);

    display(head);
}