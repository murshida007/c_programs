/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,2,3,1,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int freq[50]={0};
    for(int i=0;i<size;i++){
        freq[arr[i]]++;
        
    }
    printf("All unique elements in the array : ");
    for(int i=0;i<size;i++){
        if(freq[arr[i]]==1){
            printf("%d",arr[i]);
            
        }
    }

    return 0;
}
