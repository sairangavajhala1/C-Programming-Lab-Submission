#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;

};
struct node* insertatend(struct node* head, int data) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if(head == NULL){
        newnode->prev = NULL;
        head = newnode;
        return head;
    }
    struct node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;

    return head;
}

struct node* deleteatend(struct node* head) {
    if(head == NULL) {
        return NULL;
    }
    if(head->next == NULL) {
        free(head);
        return NULL;
    }
    struct node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);
    return head;
}

void printlist(struct node*head){
    struct node*temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    int n,data;
    struct node* head=NULL;
    printf("enter size:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter element:");
        scanf("%d",&data);
        head=insertatend(head,data);
    }
    
    head=deleteatend(head);
    printlist(head);
}