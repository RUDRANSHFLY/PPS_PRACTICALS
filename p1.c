#include <stdio.h>
#include <conio.h>

static void calcu(int c){
    int a , b , r;
    printf(" Enter 1st Number :- ");
    scanf("%d",&a);
    printf(" Enter 2st Number :- ");
    scanf("%d",&b);
    printf("\n");

    switch (c)
    {
    case 1:
        r = a + b ;
        printf("The Addition OF %d + %d is = %d ",a,b,r);
        break;
    
    case 2:
        r = a - b ;
        printf("The Subtraction OF %d - %d is = %d ",a,b,r);
        break;
    
    case 3:
        r = a * b ;
        printf("The Multiplication OF %d * %d is = %d ",a,b,r);
        break;
    
    case 4:
        r = a / b ;
        printf("The Division OF %d / %d is = %d ",a,b,r);
        break;
    
    default:
        break;
    }
}

int main() {
    printf("Calculator_Program");
    int c ;
    printf("\n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division");
    printf("\n Enter Your Choice :- ");
    scanf("%d",&c);
    if(c > 0 && 5 > c ){
         calcu(c);
    }else{
        printf("Enter from choice not other");
    }   
   
    return 0 ;
}