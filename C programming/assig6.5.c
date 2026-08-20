//Q5 VOTING - TYPE 1
#include<stdio.h>
void vote()
{
    int age=20;
    if(age>=18) 
	printf("Eligible");
    else 
	printf("Not Eligible");
}
int main()
{ vote(); 
return 0;
 }
// VOTING - TYPE 2
#include<stdio.h>
int vote()
{
    int age=20;
    if(age>=18) return 1;
    return 0;
}
int main()
{
    if(vote()) 
	printf("Eligible");
    else
	 printf("Not Eligible");
    return 0;
}
//VOTING - TYPE 3
#include<stdio.h>
void vote(int age)
{
    if(age>=18) 
	printf("Eligible");
    else 
	printf("Not Eligible");
}
int main(){ 
 vote(20);
 return 0;
  }
//VOTING - TYPE 4
#include<stdio.h>
int vote(int age)
{
    if(age>=18) return 1;
    return 0;
}
int main()
{
    if(vote(20)) printf("Eligible");
    else printf("Not Eligible");
    return 0;
}
