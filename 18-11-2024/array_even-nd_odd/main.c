/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n,b=0,c=0,a[20];
    
    printf("enter the length of array");
    scanf("%d",&n);
    printf("enter the number\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            b++;
            
        }else{
            c++;
            
        }
    }
printf("there are %d number of even numbers and %d number of odd numbe inarray",b,c);
    return 0;
}
