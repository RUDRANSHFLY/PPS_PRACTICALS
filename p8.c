#include <stdio.h>
#include <conio.h>

int main(){
    int t ;
    printf("Enter a Number :- ");
    scanf("%d",&t);
    if(t == 0){
        printf("The Number is Zero");
    }else if (t > 0){
        printf("The Number is Positive");
    }else{
        printf("The Number is Negative");
    }
    return 0 ;
}