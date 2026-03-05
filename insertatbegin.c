#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;

};

struct node* insertatbegin(struct node *head,int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    newnode->prev=NULL;
    if(head!=NULL)
        head->prev=newnode;
    
    head=newnode;
    return head;
}

void printlist(struct node* head){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    int n,id;
    struct node *head=NULL;
printf("enter number of employees:");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("enter employee id:");
    scanf("%d",&id);
    head=insertatbegin(head,id);

}
printlist(head);

return 0;
}