/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,row,col;
    printf("enter the number of row = ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
    for(col=1;col<=n;col++){
    printf("*");
    }
        printf("\n");
}

    return 0;
}