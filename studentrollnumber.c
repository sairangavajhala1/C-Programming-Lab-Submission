#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
};

struct node* insertatend(struct node* head,int data){
  struct node* newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data= data;
  newnode->next =NULL;
   if (head == NULL) {
        return newnode; 
    }

   struct node* p=head;
  while(p->next!=NULL){
    p=p->next;
  }
  {
    p->next=newnode;
  return head;free(newnode);
  }
}
int display(struct node* head){
    struct node* 
    p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

int main(){
    struct node* head=NULL;
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
     printf("Enter the roll number of student : ");
    for(int i=0;i<n;i++){
        int rollnumber;
       
        scanf("%d", &rollnumber);
        head=insertatend(head,rollnumber);
    }
    display(head);
    return 0;
}