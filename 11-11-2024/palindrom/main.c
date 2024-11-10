/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,c,s=0,r;
    
    printf("print a number =");
    scanf("%d",&n);
    c=n;
    while(n>0){
        r=n%10;
        s=r+(s*10);
        n=n/10;
    }
    if(c==s)
        printf("palindrome number");
        else
        printf("not");
    
    

    return 0;
}
