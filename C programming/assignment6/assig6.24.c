//ASSIGNMENT 4 - PRINT ARMSTRONG NUMBERS IN RANGE - TYPE 1
#include<stdio.h>
void armstrongRange()
{
    int n=500,num,r,sum,temp;
    for(num=1;num<=n;num++)
    {
        temp=num; sum=0;
        while(temp>0)
		{r=temp%10;
		sum+=r*r*r;temp/=10;}
        if(sum==num)
		 printf("%d ",num);
    }
}
int main(){
armstrongRange();
return 0;
}
// PRINT ARMSTRONG NUMBERS IN RANGE - TYPE 3
#include<stdio.h>
void armstrongRange(int n)
{
    int num,r,sum,temp;
    for(num=1;num<=n;num++)
    {
        temp=num; sum=0;
        while(temp>0){
		r=temp%10;
		sum+=r*r*r;temp/=10;}
        if(sum==num) 
		printf("%d ",num);
    }
}
int main(){
armstrongRange(500);
return 0;
}

