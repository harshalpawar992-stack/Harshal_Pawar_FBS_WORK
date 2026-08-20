//ASSIGNMENT 4 - PRINT STRONG NUMBERS IN RANGE - TYPE 1
#include<stdio.h>
void strongRange()
{
    int n=500,num,temp,r,sum,i,f;
    for(num=1;num<=n;num++)
    {
        temp=num;
		sum=0;
        while(temp>0)
        {
            r=temp%10;
			 f=1;
            for(i=1;i<=r;i++) 
			f*=i;
            sum+=f; 
			temp/=10;
        }
        if(sum==num)
		 printf("%d ",num);
    }
}
int main(){
strongRange();
return 0;
}
//PRINT STRONG NUMBERS IN RANGE - TYPE 3
#include<stdio.h>
void strongRange(int n)
{
    int num,temp,r,sum,i,f;
    for(num=1;num<=n;num++)
    {
        temp=num;sum=0;
        while(temp>0)
        {
            r=temp%10; f=1;
            for(i=1;i<=r;i++) 
			f*=i;
            sum+=f; temp/=10;
        }
        if(sum==num)
		 printf("%d ",num);
    }
}
int main(){
strongRange(500);
return 0;
}
