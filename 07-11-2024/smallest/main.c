/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=20;
    int b=40;
    printf("enter first number %d ",a);
    printf("enter another one %d ",b);
    if(a<b){
        printf("smallest is %d ",a);
        
    }else{
        if(b<a){
            printf("smallest is %d",b);
        }
    }

    return 0;
}
