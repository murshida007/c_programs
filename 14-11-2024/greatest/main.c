/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int a,b,c;

    printf("enter 3 numbers=");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is large",a);
    }else
        if(b>c){
        printf("%d is large",b);
        }else
    
        printf("%d  is large",c);
    
    return 0;
}
