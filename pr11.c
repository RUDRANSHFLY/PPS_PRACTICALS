#include <stdio.h>
#include <conio.h>

int main(){
    char a ;
    printf("Enter a Character :- ");
    scanf("%c",&a);
    int c = (int) a ;
   
    if(c >= 97 && c <= 122){
        printf("The character is small leter");
    }else if(c >= 65 && c <= 90){
        printf("The character is Capital letter");
    }else if(c >= 48 && c<= 57){
        printf("The character is number");
    }else{
        printf("The character is special character");
    }

    return 0 ;
}