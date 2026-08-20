//ASSIGNMENT 2 - Q3 GREATEST OF THREE - TYPE 1
#include<stdio.h>
void greatest(){
int a=10,b=20,c=15;if(a>b&&a>c)
printf("%d",a);
else if(b>c)
printf("%d",b);else 
printf("%d",c);}
int main(){
greatest();
return 0;}
// GREATEST OF THREE - TYPE 2
#include<stdio.h>
int greatest(){
int a=10,b=20,c=15;
if(a>b&&a>c)
return a;
else if(b>c)
return b;
return c;}
int main(){
printf("%d",greatest())
return 0;}
//GREATEST OF THREE - TYPE 3
#include<stdio.h>
void greatest(int a,int b,int c)
{
if(a>b&&a>c)
printf("%d",a);
else if(b>c)
printf("%d",b);
else 
printf("%d",c);}
int main(){
greatest(10,20,15);
return 0;}
//GREATEST OF THREE - TYPE 4
#include<stdio.h>
int greatest(int a,int b,int c){
if(a>b&&a>c)
return a;
else if(b>c)
return b;
return c;}
int main()
{printf("%d",greatest(10,20,15));
return 0;}
