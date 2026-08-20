//ASSIGNMENT 3 - Q8 STRONG - TYPE 1
#include<stdio.h>
void strong(){int n=145,temp=n,r,sum=0,i,f;
while(n>0){
r=n%10;f=1;
for(i=1;i<=r;i++)f*=i;
sum+=f;n/=10;
}
if(sum==temp)
printf("Strong");
else printf("Not Strong");}
int main()
{
strong();
return 0;
}
// STRONG - TYPE 2
#include<stdio.h>
int strong(){
int n=145,temp=n,r,sum=0,i,f
;while(n>0){r=n%10;f=1
;for(i=1;i<=r;i++)f*=i;
sum+=f;n/=10;
}
return sum==temp;
}
int main()
{if(strong()
)printf("Strong");
else printf("Not Strong");r
eturn 0;}
//STRONG - TYPE 3
#include<stdio.h>
void strong(int n)
{
int temp=n,r,sum=0,i,f;
while(n>0)
{
r=n%10;f=1;
for(i=1;i<=r;i++)f*=i;
sum+=f;n/=10;
}
if(sum==temp)
printf("Strong");
else 
printf("Not Strong");}
int main(){
strong(145);
return 0;
}
//STRONG - TYPE 4
#include<stdio.h>
int strong(int n)
{int temp=n,r,sum=0,i,f;
while(n>0){r=n%10;f=1;
for(i=1;i<=r;i++)f*=i;
sum+=f;n/=10;
}
return sum==temp;
}
int main()
{if
(strong(145))
printf("Strong");
else 
printf("Not Strong");
return 0;
}
