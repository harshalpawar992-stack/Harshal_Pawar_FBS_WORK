//ASSIGNMENT 4 - PRINT PRIME NUMBERS IN RANGE - TYPE 1
#include<stdio.h>
void primeRange()
{
    int n=20,num,i,flag;
    for(num=2;num<=n;num++)
    {
        flag=1;
        for(i=2;i<num;i++) 
		if(num%i==0){
		flag=0;
		break;}
        if(flag) 
		printf("%d ",num);
    }
}
int main(){
primeRange();
return 0;
}
// PRINT PRIME NUMBERS IN RANGE - TYPE 3
#include<stdio.h>
void primeRange(int n)
{
    int num,i,flag;
    for(num=2;num<=n;num++)
    {
        flag=1;
        for(i=2;i<num;i++) 
		if(num%i==0){
		flag=0;break;}
        if(flag) 
		printf("%d ",num);
    }
}
int main(){
primeRange(20);
return 0;}
