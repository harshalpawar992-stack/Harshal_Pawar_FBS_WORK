//ASSIGNMENT 2 - Q5 DISCOUNT - TYPE 1
#include<stdio.h>
void discount(){
int price=700,student=1,d;
 if(student&&price>500)d=20;
 else if(!student&&price>600)d=15;
 else d=10;
 printf("Discount = %d%%",d);}
int main()
{discount();
return 0;
}
//DISCOUNT - TYPE 2
#include<stdio.h>
int discount()
{int price=700,student=1;
if(student&&price>500)
return 200;
if(!student&&price>600)
return 15;
return 10;}
int main(){
printf("Discount = %d%%",discount());
return 0;}
// DISCOUNT - TYPE 3
#include<stdio.h>
void discount(int price,char student){
int d;
if((student=='y'||student=='Y')&&price>500)d=20;
else if((student=='n'||student=='N')&&price>600)d=15;
else d=10;
printf("Discount = %d%%",d);}
int main(){discount(700,'y');
return 0;
}
// DISCOUNT - TYPE 4
#include<stdio.h>
int discount(int price,char student){
if((student=='y'||student=='Y')&&price>500)
return 20;
if((student=='n'||student=='N')&&price>600)
return 15;
return 10;}
int main(){
printf("Discount = %d%%",discount(700,'y'));
return 0;
}
