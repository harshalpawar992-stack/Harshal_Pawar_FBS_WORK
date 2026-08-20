//ASSIGNMENT 4 - Q5 MENU DRIVEN - TYPE 1
#include<stdio.h>
void menu()
{
    int n=121,choice,r,rev,sum,i,flag;
    choice=1;

    if(choice==1)
    {
        if(n%2==0) printf("Even");
        else printf("Odd");
    }
    else if(choice==2)
    {
        flag=1;
        if(n<2) flag=0;
        for(i=2;i<n;i++) 
		if(n%i==0){flag=0;
		break;
		}
        if(flag)
		 printf("Prime"); 
		 else
		  printf("Not Prime");
    }
    else if(choice==3)
    {
        int temp=n; rev=0;
        while(n>0){
		r=n%10;
		rev=rev*10+r;
		n/=10;}
        if(temp==rev) 
		printf("Palindrome"); 
		else 
		printf("Not Palindrome");
    }
    else if(choice==4)
    {
        if(n>0) printf("Positive");
        else if(n<0) printf("Negative");
        else printf("Zero");
    }
    else if(choice==5)
    {
        int temp=n;
        while(n>0){r=n%10;rev=rev*10+r;n/=10;}
        printf("Reverse = %d",rev);
        n=temp;
    }
    else if(choice==6)
    {
        sum=0;
        while(n>0){sum+=n%10;n/=10;}
        printf("Sum = %d",sum);
    }
    else printf("Invalid Choice");
}
int main(){menu();return 0;}
// MENU DRIVEN - TYPE 3
#include<stdio.h>
void menu(int n,int choice)
{
    int r,rev,sum,i,flag,temp;
    if(choice==1)
    {
        if(n%2==0) 
		printf("Even"); 
		else 
		printf("Odd");
    }
    else if(choice==2)
    {
        flag=1;
        if(n<2) flag=0;
        for(i=2;i<n;i++) 
		if(n%i==0){
		flag=0;
		break;}
        if(flag) 
		printf("Prime"); 
		else 
		printf("Not Prime");
    }
    else if(choice==3)
    {
        temp=n;rev=0;
        while(n>0){
		r=n%10;
		rev=rev*10+r;
		n/=10;}
        if(temp==rev)
		 printf("Palindrome"); 
		 else
		  printf("Not Palindrome");
    }
    else if(choice==4)
    {
        if(n>0) 
		printf("Positive");
        else if(n<0) 
		printf("Negative");
        else 
		printf("Zero");
    }
    else if(choice==5)
    {
        temp=n;rev=0;
        while(n>0){r=n%10;
		rev=rev*10+r;
		n/=10;}
        printf("Reverse = %d",rev);
    }
    else if(choice==6)
    {
        sum=0;
        while(n>0)
		{sum+=n%10;n/=10;}
        printf("Sum = %d",sum);
    }
    else printf("Invalid Choice");
}
int main(){
menu(121,1);
return 0;
}
