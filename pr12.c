#include <stdio.h>
#include <conio.h>

int main(){
    int t = 0 ;
    printf("Enter the Percentage between 0 to 100 :- ");
    scanf("%d",&t);

    if(t >= 80 && t <= 100){
        printf("You got Distinction");
    }else if(t >= 60 && t <= 79){
        printf("You got First Class");
    }else if(t >= 40 && t <= 59){
        printf("You got Second Class");
    }else{
        printf("You got Failed");
    }

    return 0 ;
}

