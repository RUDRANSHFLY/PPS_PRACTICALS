#include <stdio.h>
#include <conio.h>


static int factorial( int f ){
    if(f == 0){
        return 1 ;
    }
    return f  *  factorial(f - 1);
}

int main () {
    printf("Enter The Number :- ");
    int f , r ;
    scanf("%d",&f);
    r = factorial(f); 
    printf("%d",r);

    return 0 ;
}