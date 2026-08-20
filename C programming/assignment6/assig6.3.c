//LEAP YEAR - TYPE 1
#include<stdio.h>
void leap()
{
    int y=2024;
    if((y%400==0)||(y%4==0&&y%100!=0))
	 printf("Leap Year");
    else 
	printf("Not Leap Year");
}
int main(){
 leap();
  return 0; 
  }
// LEAP YEAR - TYPE 2
#include<stdio.h>
int leap()
{
    int y=2024;
    if((y%400==0)||(y%4==0&&y%100!=0)) return 1;
    return 0;
}
int main()
{
    if(leap())
	 printf("Leap Year");
    else 
	printf("Not Leap Year");
    return 0;
}
// LEAP YEAR - TYPE 3
#include<stdio.h>
void leap(int y)
{
    if((y%400==0)||(y%4==0&&y%100!=0))
	 printf("Leap Year");
    else
	 printf("Not Leap Year");
}
int main(){ 
leap(2024);
 return 0; 
}
//LEAP YEAR - TYPE 4
#include<stdio.h>
int leap(int y)
{
    if((y%400==0)||(y%4==0&&y%100!=0)) return 1;
    return 0;
}
int main()
{
    if(leap(2024))
	 printf("Leap Year");
    else 
	printf("Not Leap Year");
    return 0;
}

