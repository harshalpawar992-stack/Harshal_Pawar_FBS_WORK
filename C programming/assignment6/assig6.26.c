//ASSIGNMENT 4 - PRINT PERFECT NUMBERS IN RANGE - TYPE 1
#include<stdio.h>
void perfectRange()
{
    int n=30,num,i,sum;
    for(num=1;num<=n;num++)
    {
        sum=0;
        for(i=1;i<num;i++) 
		if(num%i==0) sum+=i;
        if(sum==num) 
		printf("%d ",num);
    }
}
int main(){perfectRange();return 0;}
//PRINT PERFECT NUMBERS IN RANGE - TYPE 3
#include<stdio.h>
void perfectRange(int n)
{
    int num,i,sum;
    for(num=1;num<=n;num++)
    {
        sum=0;
        for(i=1;i<num;i++) 
		if(num%i==0) 
		sum+=i;
        if(sum==num)
		 printf("%d ",num);
    }
}
int main(){
perfectRange(30);
return 0;
}
