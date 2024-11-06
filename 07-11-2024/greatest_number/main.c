/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=10;
   int b=20;
  
   printf("enter first number %d",a);
   printf("enter second number %d",b);
   if(a>b){
       printf("largest is %d",a);
   
   }else{
       if(b>a){
           printf("largest is %d",b);
       }
   }


    return 0;
}