#include <stdio.h>
#include <conio.h>


int main(){
    double b , da , hra , ma , pf , g , nt ;
    printf("Enter the basic salary :- ");
    scanf("%lf",&b);
    ma = 300 ;
    da = b / 10.00 ;
    hra = b / 7.50 ;
    pf = b / 12.50 ;
    g = b + da + hra + ma ;
    nt = g - pf ;
    printf("Your net Salary :- %lf",nt);
    
    return 0 ; 
}