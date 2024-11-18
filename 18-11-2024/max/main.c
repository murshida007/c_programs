/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int max(int a,int b){
  
    if(a>b){
        return a;
    }else if(b>a){
        return b;
    }
}


int main()
{
    printf("%d",max(40,100));

    return 0;
}