//ASSIGNMENT 2 - Q4 MARKS GRADE - TYPE 1
#include<stdio.h>
void grade(){
int m=80;if(m>75)
printf("Distinction");
else if(m>65)
printf("First Class");
else if(m>55)
printf("Second Class");
else if(m>=40)
printf("Pass Class");
else
 printf("Fail");}
int main(){
grade();
return 0;}
// Q4 MARKS GRADE - TYPE 2
#include<stdio.h>
int grade(){
int m=80;
if(m>75)
return 1;
else if(m>65)
return 2;
else if(m>55)
return 3;
else if(m>=40)
return 4;
return 5;}
int main(){
int r=grade();
if(r==1
)printf("Distinction");
else if(r==2)printf("First Class");
else if(r==3)printf("Second Class");
else if(r==4)printf("Pass Class");
else printf("Fail");
return 0;}
//MARKS GRADE - TYPE 3
#include<stdio.h>
void grade(int m){
if(m>75)printf("Distinction");
else if(m>65)
printf("First Class");
else if(m>55)
printf("Second Class");
else if(m>=40)
printf("Pass Class");
else 
printf("Fail");}
int main(){
grade(80);
return 0;}
// MARKS GRADE - TYPE 4
#include<stdio.h>
int grade(int m){
if(m>75)
return 1;
else if(m>65)
return 2;
else if(m>55)
return 3;
else if(m>=40)
return 4;
return 5;}
int main(){
int r=grade(80);
if(r==1)
printf("Distinction");
else if(r==2)
printf("First Class");
else if(r==3)
printf("Second Class");
else if(r==4)
printf("Pass Class");
else 
printf("Fail");
return 0;
}
