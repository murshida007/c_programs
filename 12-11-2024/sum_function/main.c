/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sumOfDigits(int a,int b){
    int sum=a+b;
    return sum;
}
int main()
{
    int a,b,i,sum;
    printf("enter any number=");
    scanf("%d",&b);
    printf("enter second number=");
    scanf("%d",&a);
    for(i=0;i<=b;i++){
        sum=a+b;
    }
        printf("sum is =%d",sum);
    

    return 0;
}