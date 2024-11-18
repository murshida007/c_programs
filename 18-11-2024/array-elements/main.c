/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int n;

    //enter the count of elements
    printf("Enter the no.of elements : ");
    scanf("%d",&n);
    //array declaration
    int arr[n];

    //scanning the elements
    printf("Enter %d elements : ",n);
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

    //printing the elements
    printf("Entered elements : ");
    for(int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }

    return 0;

}