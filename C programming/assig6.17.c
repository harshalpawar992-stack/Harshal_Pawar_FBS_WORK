//ASSIGNMENT 3 - Q3 SUM OF RANGE - TYPE 1
#include<stdio.h>
void rangeSum()
{
    int start=1,end=5,i,sum=0;
    for(i=start;i<=end;i++)
	 sum=sum+i;
    printf("Sum = %d",sum);
}
int main(){
rangeSum();
return 0;}
// SUM OF RANGE - TYPE 3
#include<stdio.h>
void rangeSum(int start,int end)
{
    int i,sum=0;
    for(i=start;i<=end;i++) 
	sum=sum+i;
    printf("Sum = %d",sum);
}
int main(){
rangeSum(1,5);
return 0;
}