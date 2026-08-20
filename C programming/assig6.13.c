//ASSIGNMENT 2 - Q6 DIVISIBLE BY 3 OR 5 - TYPE1
#include<stdio.h>
void divisible(){
int n=15;
if(n%3==0&&n%5==0)
printf("Divisible by both");
else if(n%3==0)
printf("Divisible by 3");
else if(n%5==0)
printf("Divisible by 5");
else 
printf("Divisible by none");}
int main(){
divisible();
return 0;}
//DIVISIBLE BY 3 OR 5 - TYPE 2
#include<stdio.h>
int divisible()
{
int n=15;if
(n%3==0&&n%5==0)
return 3;
if(n%3==0)
return 1;
if(n%5==0)
return 2;
return 0;}
int main()
{
int r=divisible();
if(r==3)
printf("Divisible by both");
else if(r==1)
printf("Divisible by 3");
else if(r==2)
printf("Divisible by 5");
else 
printf("Divisible by none");
return 0;}
//DIVISIBLE BY 3 OR 5 - TYPE 3
#include<stdio.h>
void divisible(int n)
{
if(n%3==0&&n%5==0)
printf("Divisible by both");
else if(n%3==0)
printf("Divisible by 3");
else if(n%5==0)
printf("Divisible by 5");
else 
printf("Divisible by none");}
int main(){
divisible(15);
return 0;}
//DIVISIBLE BY 3 OR 5 - TYPE 4
#include<stdio.h>
int divisible(int n)
{
if(n%3==0&&n%5==0)
return 3;
if(n%3==0)
return 1;
if(n%5==0)
return 2;
return 0;}
int main()
{int r=divisible(15);
if(r==3)
printf("Divisible by both");
else if(r==1)
printf("Divisible by 3");
else if(r==2)
printf("Divisible by 5");
else 
printf("Divisible by none");
return 0;}
