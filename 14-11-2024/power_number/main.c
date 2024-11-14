/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int power(int foot,int expo){
    int p=1;
    for(int i=0;i<expo;i++){
        p=p*foot;

    }
    return p;
}
int main(){
    printf("%d",power(3,2));

return 0;
}