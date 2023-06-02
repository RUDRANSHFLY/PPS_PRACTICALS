#include <stdio.h>
#include <conio.h>

int main() {
    int k ;
    printf("Enter the kilometer :- ");
    scanf("%d",&k);
    printf("The %d km in m is :- %d Meter \n",k,k*1000);
    printf("The %d km in fe is :- %d Feet \n",k,k*3281);
    printf("The %d km in in is :- %d Inches \n",k,k*39370);
    printf("The %d km in cm is :- %d Centimeter \n",k,k*100000);
    return 0 ;
}