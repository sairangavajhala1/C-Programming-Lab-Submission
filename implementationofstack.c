#include <stdio.h>
#include<stdbool.h>
#define ap 10
int stack[ap];
int top = -1;

 bool isfull(){
    if (top==ap-1)
    return true;
    else
    return false;
}
bool isempty(){
    if(top==-1)
      return true;
    else
        return false;
}

void push(int x){
    if(!isfull()){
        top++;
        stack[top]=x;
        printf("pushed element is %d\n",x);
    }
    else{
        printf("stack overflow");
    }
}
void pop(){
    if(!isempty()){
        printf("popped element is %d",stack[top]);
        top--;
    }
    else{
        printf("stack underflow");
    }
    }

int main(){
    push(10);
 push(20);
 pop();
    return 0;
}