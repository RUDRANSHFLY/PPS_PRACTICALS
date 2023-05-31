#include <stdio.h>
#include <conio.h>

int main(){
    int n1 , n2 ;
    printf("Two Number Interchange Program \n ");

    printf("Enter the number for n1 :- ");
    scanf("%d",&n1);
       
    printf("Enter the number for n2 :- ");
    scanf("%d",&n2);

    printf("Before Interchange the value of n1 is :- %d and n2 is :- %d \n",n1,n2);

    int t = n2 ;
    n2 = n1 ;
    n1 = t ;

   printf("After Interchange the value of n1 is :- %d and n2 is :- %d",n1,n2);
    
}