#include <stdio.h>
#include <conio.h>

int main(){
    int n1 , n2 , n3 ;
    printf("Enter the First Number :- ");
    scanf("%d",&n1);
    
    printf("Enter the Second Number :- ");
    scanf("%d",&n2);
    
    printf("Enter the Third Number :- ");
    scanf("%d",&n3);

    if(n1 >= n2 && n1 >= n3){
        printf("The maximum number is first one %d", n1);
    }else if(n2 >= n1 && n2 >= n3){
        printf("The maximum number is second one %d", n2);
    }else{
        printf("The maximum number is third one %d",n3);
    }
    return 0 ;
}