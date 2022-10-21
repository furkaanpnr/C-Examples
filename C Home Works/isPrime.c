#include <stdio.h>

int isPrime( int number){
    int i;
    for(i=2;i<number;i++){
        if(number % i == 0) return 0;
    }
    return 1;
}

int main(void){
    int number;
    printf("Enter a number >");
    scanf("%d",&number);
    
    if(asal_mi(number)==0){
        printf("The number entered is not prime.");
    }
    else printf("The number entered is prime.");

    return 0;
}