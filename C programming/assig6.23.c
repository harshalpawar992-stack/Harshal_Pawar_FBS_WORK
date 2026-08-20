//ASSIGNMENT 3 - Q9 PALINDROME - TYPE 1
#include<stdio.h>
void palindrome(){
int n=121,temp=n,r,rev=0;
while(n>0)
{r=n%10;
rev=rev*10+r;
n/=10;}
if(rev==temp)
printf("Palindrome");
else
 printf("Not Palindrome");}
int main(){
palindrome();
return 0;
}
//PALINDROME - TYPE 2
#include<stdio.h>
int palindrome(){
int n=121,temp=n,r,rev=0;
while(n>0){
r=n%10;
rev=rev*10+r;
n/=10;}
return rev==temp;
}
int main(){if(palindrome())
printf("Palindrome");
else 
printf("Not Palindrome");return 0;}
//PALINDROME - TYPE 3
#include<stdio.h>
void palindrome(int n)
{
int temp=n,r,rev=0;
while(n>0)
{r=n%10;rev=rev*10+r;n/=10;
}
if(rev==temp)printf("Palindrome");
else
 printf("Not Palindrome");}
int main(){
palindrome(121);
return 0;}
// PALINDROME - TYPE 4
#include<stdio.h>
int palindrome(int n){
int temp=n,r,rev=0;
while(n>0){r=n%10;rev=rev*10+r
;n/=10;}
return rev==temp;}
int main()
{
if(palindrome(121))
printf("Palindrome");
else
 printf("Not Palindrome");
return 0;
}