//ASSIGNMENT 2 - Q1 CALCULATOR - TYPE 2
#include<stdio.h>
int calc()
{
    int a=20,b=5; char op='+';
    if(op=='+') 
	return a+b;
    if(op=='-')
	 return a-b;
    if(op=='*')
	 return a*b;
    if(op=='/') 
	return a/b;
    if(op=='%') 
	return a%b;
    return 0;
}
int main(){
printf("%d",calc());
return 0;}
//CALCULATOR - TYPE 3
#include<stdio.h>
void calc(int a,int b,char op)
{
    if(op=='+') 
	printf("%d",a+b);
    else if(op=='-')
	 printf("%d",a-b);
    else if(op=='*') 
	printf("%d",a*b);
    else if(op=='/')
	 printf("%d",a/b);
    else if(op=='%')
	 printf("%d",a%b);
    else 
	printf("Invalid Operator");
}
int main(){
calc(20,5,'+');
return 0;}
// CALCULATOR - TYPE 4
#include<stdio.h>
int calc(int a,int b,char op)
{
    if(op=='+') 
	return a+b;
    if(op=='-') 
	return a-b;
    if(op=='*') 
	return a*b;
    if(op=='/') 
	return a/b;
    if(op=='%') 
	return a%b;
    return 0;
}
int main(){
printf("%d",calc(20,5,'+'));
return 0;}

