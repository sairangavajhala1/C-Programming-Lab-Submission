#include<stdio.h>

int main(){
  
 int pos, num;
 printf("Enter the number:");
 scanf("%d",&num); 


 for(pos=4 ;pos>=0;pos--)
 {
 printf("%d",num>>pos&1);
 } 
printf("\n");
return 0;

}