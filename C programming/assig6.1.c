//ASSIGNMENT 1 - Q1 EVEN OR ODD - TYPE 1
#include<stdio.h>
void evenOdd()
{
    int n=10;
    if(n%2==0) printf("Even");
    else printf("Odd");
}
int main(){ evenOdd(); return 0;
 }

// EVEN OR ODD - TYPE 2
#include<stdio.h>
int evenOdd()
{
    int n=10;
    if(n%2==0) return 1;
    return 0;
}
int main()
{
    if(evenOdd()) printf("Even");
    else printf("Odd");
    return 0;
}
// EVEN OR ODD - TYPE 3
#include<stdio.h>
void evenOdd(int n)
{
    if(n%2==0) printf("Even");
    else printf("Odd");
}
int main(){
 evenOdd(10); 
 return 0; 
}
// EVEN OR ODD - TYPE 4
#include<stdio.h>
int evenOdd(int n)
{
    if(n%2==0) return 1;
    return 0;
}
int main()
{
    if(evenOdd(10)) printf("Even");
    else printf("Odd");
    return 0;
}

