/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,sum;
    printf("Enter the Number= ");
    scanf("%d",&n);
    do{
        sum = sum + i;
        i++;
    }while(i<=n);
        printf("sum = %d",sum);

    return 0;
}