//ASSIGNMENT 3 - Q6 PERFECT - TYPE 1
#include<stdio.h>
void perfect()
{
int n=28,i,sum=0;
for(i=1;i<n;i++)
if(n%i==0)sum+=i;
if(sum==n)
printf("Perfect");
else
 printf("Not Perfect");}
int main(){
perfect();
return 0;}
// PERFECT - TYPE 2
#include<stdio.h>
int perfect(){int n=28,i,sum=0;
for(i=1;i<n;i++)
if(n%i==0)sum+=i;
eturn sum==n;}
int main(){
if(perfect())
printf("Perfect");
else 
printf("Not Perfect");
return 0;}
// PERFECT - TYPE 3
#include<stdio.h>
void perfect(int n)
{int i,sum=0;
for(i=1;i<n;i++)
if(n%i==0)sum+=i;
if(sum==n)
printf("Perfect");
else 
printf("Not Perfect");}
int main(){
perfect(28);
return 0;}
// PERFECT - TYPE 4
#include<stdio.h>
int perfect(int n){
int i,sum=0;
for(i=1;i<n;i++)
if(n%i==0)
sum+=i;
return 
sum==n;}
int main()
{
if(perfect(28))
printf("Perfect");
else 
printf("Not Perfect");
return 0;}