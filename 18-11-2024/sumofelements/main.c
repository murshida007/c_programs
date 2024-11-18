/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,j,array[3];
    printf("enter the size = ");
    int sum=0;
    
    scanf("%d",&n);
    printf("enter the values = ");
    for(int i=0;i<n;i++){
       scanf("%d",&array[i]);
       
    }
    for(j=0;j<n;j++){
        sum+=array[j];
    }
    printf("sum of all elements : %d",sum);

    return 0;
}
