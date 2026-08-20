// 3 DIGIT PALINDROME - TYPE 1
#include<stdio.h>
void palindrome()
{
    int n=121, temp=n, rev=0, r;
    while(n>0)
{
	 r=n%10; rev=rev*10+r; n=n/10;
}
    if(temp==rev)
	 printf("Palindrome");
    else
	 printf("Not Palindrome");
}
int main(){ 
palindrome(); 
return 0; 
}
// 3 DIGIT PALINDROME - TYPE 2
#include<stdio.h>
int palindrome()
{
    int n=121, temp=n, rev=0, r;
    while(n>0)
{ 
	r=n%10; rev=rev*10+r;n=n/10;
}
    if(temp==rev) return 1;
    return 0;
}
int main()
{
    if(palindrome()) 
	printf("Palindrome");
    else 
	printf("Not Palindrome");
    return 0;
}
// 3 DIGIT PALINDROME - TYPE 3
#include<stdio.h>
void palindrome(int n)
{
    int temp=n, rev=0, r;
    while(n>0)
{
	 r=n%10;rev=rev*10+r; n=n/10;
 }
    if(temp==rev) 
	printf("Palindrome");
    else printf("Not Palindrome");
}
int main(){
 palindrome(121); return 0;
 }
// 3 DIGIT PALINDROME - TYPE 4
#include<stdio.h>
int palindrome(int n)
{
    int temp=n, rev=0, r;
    while(n>0)
{ 
	r=n%10; rev=rev*10+r;n=n/10;
 }
    if(temp==rev) 
	return 1;
    return 0;
}
int main()
{
    if(palindrome(121)) 
	printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}

