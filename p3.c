#include <stdio.h>


int main() {
    int i , p , r , n ;
    printf("Simple Interset Calculator \n ");

    printf("Enter The Principal Amount :- ");
    scanf("%d",&p);

    printf("Enter The Rate of Interset :- ");
    scanf("%d",&r);

    printf("Enter The Year or Tenure :- ");
    scanf("%d",&n);

    if(p > 0 && r >= 0 && n > 0){
        
        i = ( p * r * n ) /  100 ;
        printf("The Simple Interset is :- %d",i); 

    }else{
    
        printf("Enter the positive numbers in All Terms");
    
    }
    return 0;
}

