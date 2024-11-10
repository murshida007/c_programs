/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,cnt=0;
    printf("enter any numbers= ");
    scanf("%d",&num);
    while(num>0){
        num=num/10;
        cnt=cnt+1;
        
    }
        printf("number of digits %d",cnt);

    return 0;
}
