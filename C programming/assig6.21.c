//ASSIGNMENT 3 - Q7 FACTORIAL - TYPE 1
#include<stdio.h>
void factorial(){
int n=5,i,f=1;
for(i=1;i<=n;i++)f*=i;
printf("%d",f);}
int main(){
factorial();
return 0;}
// FACTORIAL - TYPE 2
#include<stdio.h>
int factorial(){
int n=5,i,f=1;
for(i=1;i<=n;i++)f*=i;
return f;}
int main(){
printf("%d",factorial());
return 0;}
//FACTORIAL - TYPE 3
#include<stdio.h>
void factorial(int n){
int i,f=1;
for(i=1;i<=n;i++)f*=i;
printf("%d",f);}
int main(){
factorial(5);
return 0;}
//FACTORIAL - TYPE 4
#include<stdio.h>
int factorial(int n
{int i,f=1;
for(i=1;i<=n;i++)f*=i;
return f;}
int main(){
printf("%d",factorial(5));
return 0;
}

