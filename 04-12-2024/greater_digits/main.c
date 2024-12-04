/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,rem,large=0;
printf("enter any numbers : ");
scanf("%d",&num);
while(num>0){
    rem=num%10;
    if(large<rem){
        large=rem;
        
    }
    num=num/10;
}
printf("the large digit is = %d",large);
    return 0;
}