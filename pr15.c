#include <stdio.h>
#include <conio.h>
#include <math.h>

int main (){
    int arr [10] ;
    
    for (int i = 0; i < 10; i++)
    {
        int t ;
        printf("Enter the %d number :- ",i+1);
        scanf("%d",&t);
        arr[i] = t ;
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ",arr[i]);
    // }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < 10; i++)
    {
        if(arr[i] > max){
            max = arr[i] ;
        }
        if(min > arr[i]){
            min = arr[i] ;
        }
    }
    
    printf("The Maximum Number out of 10 number is :- %d \n",max);
    printf("The Minimum Number out of 10 number is :- %d \n",min);
    return 0 ;
}