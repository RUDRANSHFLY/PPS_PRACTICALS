#include <stdio.h>
#include <conio.h>
int main(){
    int h , b , a ;
    printf("Triangle Area Calculator \n");    
    printf("Enter the hieght of Triangle :- ");
    scanf("%d",&h);
    printf("Enter the Base of Triangle :- ");
    scanf("%d",&b);
    if(b > 0 && h > 0){
        a = b * h * 0.5 ;    
        printf("The Area of Triangle is %d ",a);
    }else{
        printf("The Hieght or Base Cannot be Negative");
    }
    return 0 ;
}