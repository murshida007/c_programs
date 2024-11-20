/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
   char s[20];
   int i,len,count=0;
   printf("enter a string = ");
   scanf("%s",s);
   len=strlen(s);
   for(i=0;i<len;i++){
       if(s[i]!=s[len-i-1]){
           count=1;
           break;
           
       }
   }
   if(count==0){
       printf("palindrome string");
       
  } else
   printf("not a palindrome string");
   
    return 0;
}