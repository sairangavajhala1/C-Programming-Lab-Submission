#include<stdio.h>
#include<string.h>
int main(){
int vcount=0,ccount=0;
char str[100];
char *p;

printf("Enter the word:");
scanf("%s", str);
p=str;
while(*p!='\0')
{
if(*p=='A' || *p=='E' || *p=='I' ||*p=='O' ||*p=='U'
    ||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')

 vcount++;

 else 
   ccount++;

    p++;
    }
printf("number of vowels in word:%d\n",vcount);
printf("number of consonents in word:%d\n ",ccount);


return 0;}