 //Q6 UPPERCASE OR LOWERCASE - TYPE 1
#include<stdio.h>
void caseCheck()
{
    char ch='A';
    if(ch>='A'&&ch<='Z')
	 printf("Uppercase");
    else if(ch>='a'&&ch<='z') 
	printf("Lowercase");
    else 
	printf("Invalid Character");
}
int main(){ 
caseCheck();
 return 0; }
//UPPERCASE OR LOWERCASE - TYPE 2
#include<stdio.h>
int caseCheck()
{
    char ch='A';
    if(ch>='A'&&ch<='Z')
	return 1;
    if(ch>='a'&&ch<='z') 
	return 2;
    return 0;
}
int main()
{
    int r=caseCheck();
    if(r==1)
	 printf("Uppercase");
    else if(r==2) 
	printf("Lowercase");
    else 
	printf("Invalid Character");
    return 0;
}
// UPPERCASE OR LOWERCASE - TYPE 3
#include<stdio.h>
void caseCheck(char ch)
{
    if(ch>='A'&&ch<='Z')
	 printf("Uppercase");
    else if(ch>='a'&&ch<='z')
	 printf("Lowercase");
    else
	 printf("Invalid Character");
}
int main()
{
caseCheck('A'); 
return 0;
 }
// UPPERCASE OR LOWERCASE - TYPE 4
#include<stdio.h>
int caseCheck(char ch)
{
    if(ch>='A'&&ch<='Z')
	 return 1;
    if(ch>='a'&&ch<='z')
	 return 2;
    return 0;
}
int main()
{
    int r=caseCheck('A');
    if(r==1)
	 printf("Uppercase");
    else if(r==2)
	 printf("Lowercase");
    else 
	 printf("Invalid Character");
    return 0;
}
