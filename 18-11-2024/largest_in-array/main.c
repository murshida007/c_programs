/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,max,size=6;
    int arr[6]={22,22,88,44,55,66};
    max=arr[0];
    for(i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
        printf("the largest number is: %d",max);
    

    return 0;
}
