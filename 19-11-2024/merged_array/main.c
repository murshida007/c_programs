/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr1[3],arr2[3],mergedArray[6],i,j;
    printf("enter the 3 numbers in array = ");
    for(i=0;i<3;i++){
        scanf("%d",&arr1[i]);
        mergedArray[i]=arr1[i];
    }
    printf("enter the 3 numbers in array = ");
    for(j=0;j<3;j++){
        scanf("%d",&arr2[j]);
        mergedArray[i]=arr2[j];
        i++;
    }
        printf("merged Array : \n");
        for(j=0;j<6;j++){
            printf("%d",mergedArray[j]);
        }

    return 0;
}