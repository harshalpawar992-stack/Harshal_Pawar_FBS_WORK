//Q4 VOWEL OR CONSONANT - TYPE 1
#include<stdio.h>
void vowel()
{
    char ch='a';
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') printf("Vowel");
    else printf("Consonant");
}
   int main(){ 
   vowel();
   return 0;
  }
//VOWEL OR CONSONANT - TYPE 2
#include<stdio.h>
int vowel()
{
    char ch='a';
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') return 1;
    return 0;
}
int main()
{
    if(vowel())
	 printf("Vowel");
    else 
	printf("Consonant");
    return 0;
}
//VOWEL OR CONSONANT - TYPE 3
#include<stdio.h>
void vowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') printf("Vowel");
    else printf("Consonant");
}
int main(){ 
  vowel('a');
  return 0; }
// VOWEL OR CONSONANT - TYPE 4
#include<stdio.h>
int vowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') return 1;
    return 0;
}
int main()
{
    if(vowel('a'))
    printf("Vowel");
    else 
	printf("Consonant");
    return 0;
}
