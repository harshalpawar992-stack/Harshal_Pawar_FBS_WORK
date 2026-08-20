//ASSIGNMENT 3 - Q1 PRINT 1 TO 10 - TYPE 1
#include<stdio.h>
void print10()
{
int i=1;
while(i<=10){
printf("%d ",i);
i++;}}
int main(){
print10();
return 0;}
// PRINT 1 TO 10 - TYPE 2
#include<stdio.h>
int print10(){
int i=1;
while(i<=10){
printf("%d ",i);
i++;}
return 0;}
int main(){print10();return 0;}
// Q1 PRINT 1 TO 10 - TYPE 3
#include<stdio.h>
void printN(int n)
int i=1;
while(i<=n){
printf("%d ",i);
i++;}}
int main(){
printN(10);return 0;}
// PRINT 1 TO 10 - TYPE 4
#include<stdio.h>
int printN(int n)
{
int i=1;
while(i<=n){
printf("%d ",i);
i++;}
return n;}
int main(){
printN(10);
return 0;
}