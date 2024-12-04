/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,reverse=0,reminder;
    printf("enter a number");
    scanf("%d",&num);
    while(num!=0){
        reminder=num%10;
        reverse=reverse+reminder;
        num=num/10;
    }
     printf("%d",reverse);

    return 0;
}
