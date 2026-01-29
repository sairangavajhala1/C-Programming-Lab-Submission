#include<stdio.h>

int main(){

int a[100],i;
int n;

printf("enter the number of elements:");
scanf("%d",&n);

for(i=0;i<n;i++){
printf("enter the %d element:",i+1);
scanf("%d",&a[i]);
}


for(i=0;i<n;i++)
printf("%d,",a[i]);
    return 0;
}