//ASSIGNMENT 3 - Q5 ARMSTRONG - TYPE 1
#include<stdio.h>
void armstrong(){
int n=153,temp=n,r,sum=0;
while(n>0){
r=n%10;
sum=sum+r*r*r;
n=n/10;
}
if(sum==temp)
printf("Armstrong");
else
 printf("Not Armstrong");}
int main(){
armstrong();
return 0;}
//ARMSTRONG - TYPE 2
#include<stdio.h>
int armstrong(){
int n=153,temp=n,r,sum=0;
while(n>0){
r=n%10;
sum=sum+r*r*r;
n=n/10;}
return
 sum==temp;}
int main(){
if(armstrong())
printf("Armstrong");
else 
printf("Not Armstrong");
return 0;}
// ARMSTRONG - TYPE 3
#include<stdio.h>
void armstrong(int n)
{
int temp=n,r,sum=0;
while(n>0){
r=n%10;
sum=sum+r*r*r;
n=n/10;}
if(sum==temp)
printf("Armstrong");
else 
printf("Not Armstrong");}
int main(){
armstrong(153);
return 0;}
// ARMSTRONG - TYPE 4
#include<stdio.h>
int armstrong(int n)
{int temp=n,r,sum=0;
while(n>0)
{r=n%10;
sum=sum+r*r*r;
n=n/10;}
return sum==temp;}
int main()
{
if(armstrong(153)
printf("Armstrong");
else
 printf("Not Armstrong");
return 0;}

