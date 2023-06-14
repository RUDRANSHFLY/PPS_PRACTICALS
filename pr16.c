#include <stdio.h>
#include <conio.h>

int main (){
    int t ;
    printf("Enter the Number :- ");
    scanf("%d",&t);
    t = t % 10 ;
    printf("The last diget is :- %d \n",t);
    if(t % 2 == 0){
        printf("The last digit number is even");
    }else{
        printf("The last digit number is odd");
    }
    return 0 ;
}