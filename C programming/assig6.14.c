//ASSIGNMENT 2 - Q7 AGE CATEGORY - TYPE 1
#include<stdio.h>
void age(){
int a=25;
if(a<12)
printf("Child");
else if(a<=19)
printf("Teenager");
else if(a<=59)
printf("Adult");
else 
printf("Senior");}
int main(){
age();
return 0;}
// AGE CATEGORY - TYPE 2
#include<stdio.h>
int age(){i
nt a=25;
if(a<12)
return 1;
else if(a<=19)
return 2;
else if(a<=59)
return 3;
return 4;}
int main(){
int r=age();
if(r==1)
printf("Child");
else if(r==2)
printf("Teenager");
else if(r==3)
printf("Adult");
else 
printf("Senior");
return 0;
}
// AGE CATEGORY - TYPE 3
#include<stdio.h>
void age(int a){
if(a<12)
printf("Child");
else if(a<=19)
printf("Teenager");
else if(a<=59)
printf("Adult");
else 
printf("Senior");}
int main(){
age(25);
return 0;
}
// AGE CATEGORY - TYPE 4
#include<stdio.h>
int age(int a)
{if(a<12)return 1;
else if(a<=19)
return 2;
else if(a<=59)
return 3;
return 4;}
int main(){
int r=age(25);
if(r==1)
printf("Child");
else if(r==2)
printf("Teenager");
else if(r==3)
printf("Adult");
else 
printf("Senior");
return 0;}