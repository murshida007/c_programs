/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,a=0,b=1,c,i;
    printf("enter the number of term...");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
        
    }

    return 0;
}
