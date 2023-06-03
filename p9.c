#include <stdio.h>
#include <conio.h>

int main(){
    int m ;
    printf("Enter the marks out of 100 :- ");
    scanf("%d",&m);
    if(m >= 35){
        printf("The Student is Pass");
    }else{
        printf("The Student is Fail");
    }
    return 0 ;
}