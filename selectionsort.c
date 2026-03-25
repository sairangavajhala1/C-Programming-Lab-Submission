#include<stdio.h>
int main(){
     int n,j;
     printf("enter the number of elements: ");
     scanf("%d",&n);
     int numbers[n];
     for(int i=0;i<n;i++){
            scanf("%d",&numbers[i]);
     }
     for(int i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(numbers[j]<numbers[min]){
                min=j;
            }}
            int temp=numbers[i];
            numbers[i]=numbers[min];
            numbers[min]=temp;
        }

        for(int i=0;i<n;i++){
            printf("%d ",numbers[i]);
        } 
    return 0;
}