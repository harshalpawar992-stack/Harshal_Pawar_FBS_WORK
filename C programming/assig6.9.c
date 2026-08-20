//ASSIGNMENT 2 - Q2 TRIANGLE TYPE - TYPE 1
#include<stdio.h>
void triangle()
{
    int a=5,b=5,c=5;
    if(a==b&&b==c)
	 printf("Equilateral");
    else if
	(a==b||b==c||a==c) 
	printf("Isosceles");
    else
	 printf("Scalene");
}
int main(){
triangle();
return 0;}
//TRIANGLE TYPE - TYPE 2
#include<stdio.h>
int triangle()
{
    int a=5,b=5,c=5;
    if(a==b&&b==c) return 1;
    if(a==b||b==c||a==c) return 2;
    return 3;
}
int main(){
int r=triangle();
if(r==1)
printf("Equilateral");
else if(r==2)
printf("Isosceles");
else 
printf("Scalene");
return 0;}
// TRIANGLE TYPE - TYPE 3
#include<stdio.h>
void triangle(int a,int b,int c)
{
    if(a==b&&b==c)
	 printf("Equilateral");
    else if(a==b||b==c||a==c) 
	printf("Isosceles");
    else
	 printf("Scalene");
}
int main(){
triangle(5,5,5);
return 0;}
//TRIANGLE TYPE - TYPE 4
#include<stdio.h>
int triangle(int a,int b,int c)
{
    if(a==b&&b==c) 
	return 1;
    if(a==b||b==c||a==c)
	 return 2;
    return 3;
}
int main(){
int r=triangle(5,5,5);
if(r==1)
printf("Equilateral");
else if(r==2)
printf("Isosceles");
else 
printf("Scalene");
return 0;}
