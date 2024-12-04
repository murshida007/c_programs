/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,num;
    
    printf("enter any number");
    scanf("%d",&num);
    n=num;
    int r,result=0;
    while(n!=0){
      r=n%10;
      result=result+(r*r*r);
      n=n/10;
     }
     if(result==num){
         printf("it is An Amstrong Number");
     }else
     {
         printf("it is not Amstrong Number");
     }
     
    return 0;
}