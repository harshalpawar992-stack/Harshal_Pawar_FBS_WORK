//ASSIGNMENT 3 - Q2 TABLE - TYPE 1
#include<stdio.h>
void table(){
int n=5,i=1;
while(i<=10)
{
printf("%d ",n*i);
i++;}}
int main(){
table();
return 0;}
// TABLE - TYPE 2
#include<stdio.h>
int table(){int n=5,i=1;
while(i<=10){
printf("%d ",n*i);
i++;}
return 0;}
int main(){
table();
return 0;}
// TABLE - TYPE 3
#include<stdio.h>
void table(int n)
int i=1;
while(i<=10){
printf("%d ",n*i);
i++;}
}
int main(){
table(5);
return 0;}
// TABLE - TYPE 4
#include<stdio.h>
int table(int n){
int i=1;
while(i<=10){
printf("%d ",n*i);
i++;}
return n*10;
}
int main(){
table(5);
return 0;}
