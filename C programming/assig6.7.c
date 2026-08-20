// Q7 SALARY - TYPE 1
#include<stdio.h>
void salary()
{
    int basic=5000,da,ta,hra,total;
    if
	(basic<=5000){da=basic*10/100;ta=basic*20/100;hra=basic*25/100;}
    else
	{da=basic*15/100;ta=basic*25/100;hra=basic*30/100;}
    total=basic+da+ta+hra;
    printf("Total Salary = %d",total);
}
int main(){ 
salary(); 
return 0; }
SALARY - TYPE 2
#include<stdio.h>
int salary()
{
    int basic=5000,da,ta,hra;
    if(basic<=5000)
	{da=basic*10/100;ta=basic*20/100;hra=basic*25/100;}
    else
	{da=basic*15/100;ta=basic*25/100;hra=basic*30/100;}
    return basic+da+ta+hra;
}
int main(){ 
printf("Total Salary = %d",salary());
 return 0; }
//SALARY - TYPE 3
#include<stdio.h>
void salary(int basic)
{
    int da,ta,hra,total;
    if(basic<=5000)
	{da=basic*10/100;ta=basic*20/100;hra=basic*25/100;}
    else
	{da=basic*15/100;ta=basic*25/100;hra=basic*30/100;}
    total=basic+da+ta+hra;
    printf("Total Salary = %d",total);
}
int main(){ 
salary(5000); 
return 0; }
// SALARY - TYPE 4
#include<stdio.h>
int salary(int basic)
{
    int da,ta,hra;
    if
	(basic<=5000){da=basic*10/100;ta=basic*20/100;hra=basic*25/100;}
    else
	{da=basic*15/100;ta=basic*25/100;hra=basic*30/100;}
    return basic+da+ta+hra;
}
int main(){ 
printf("Total Salary = %d",salary(5000)); 
return 0; }
// CALCULATOR - TYPE 1
#include<stdio.h>
void calc()
{
    int a=20,b=5; char op='+';
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
    else printf("Invalid Operator");
}
int main()
{
calc();
return 0;
}

