//ASSIGNMENT 3 - Q4 PRIME - TYPE 1
#include<stdio.h>
void prime(){
int n=7,i,flag=1;
for(i=2;i<n;i++)
if(n%i==0){f
lag=0;
break;}
if(flag)
printf("Prime");
else 
printf("Not Prime");}
int main(){
prime();
return 0;}
// Q4 PRIME - TYPE 2
#include<stdio.h>
int prime()
{
int n=7,i,flag=1;
for(i=2;i<n;i++)
if(n%i==0)
{flag=0;
break;
}return flag;}
int main()
{if(prime())
printf("Prime");
else printf("Not Prime");
return 0;}
// PRIME - TYPE 3
#include<stdio.h>
void prime(int n){
int i,flag=1;
if(n<2)flag=0;
for(i=2;i<n;i++)
if(n%i==0){
flag=0;break;
}
if(flag)printf("Prime");
else printf("Not Prime");
}
int main(){
prime(7);
return 0;}
 //PRIME - TYPE 4
#include<stdio.h>
int prime(int n){
int i;if(n<2)
return 0;
for(i=2;i<n;i++
)if(n%i==0)
return 0;
return 1;}
int main(){
if(prime(7))
printf("Prime");
else 
printf("Not Prime");
return 0;}

