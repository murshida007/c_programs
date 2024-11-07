/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){

  int mark;
  printf("enter your mark : ");
  scanf("%d",&mark);
  if(mark>=90){
      printf("A");
  }else
      if(mark<=89&& mark>=80){
          printf("B");
      }else
          if(mark<=79&& mark>=70){
              printf("C");
          }else
              if(mark<=69&& mark>=60){
                  printf("D");
              }else
              if(mark<=59){
                  printf("Fail");
              }
                
              return 0;
}
