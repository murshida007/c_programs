/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[]="softroniics";
    int i,countv=0;
    for(i=0;a[i]!='\0';i++){
        if(a[i]=='a' || a[i]=='A'||
        a[i]=='e' || a[i]=='E'||
        a[i]=='i' || a[i]=='I'||
        a[i]=='o' || a[i]=='O'||
        a[i]=='u' || a[i]=='U'){
            countv++;
        }
   
    }
printf("\nln string %s",a);
printf("\nNumber of vowels %d",countv);

    return 0;
}