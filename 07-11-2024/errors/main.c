/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    printf("enter first number: ");
    scanf("%d",&num1);
    printf("enter second number: ");
    scanf("%d",&num2);
    printf("sum is %d ",num1+num2);
        if(num1>num2){
            printf("%d greater");
        }else
        if(num1<num2){
            printf("%d error");
        }
    
    
     return 0;
}
