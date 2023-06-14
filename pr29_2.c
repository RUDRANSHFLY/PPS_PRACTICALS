#include <stdio.h>
#include <conio.h>

int main () {
    int n = 5 ;
    for (int i = 0; i < n; i++)
    {
        for(int s = n ; s > i - 1 ; s--){
            printf(" ");
        }
        for(int j = 0 ; j <= i ;j++){
            printf(" *");
        }
        printf("\n");
    }
    
    return 0 ;
}