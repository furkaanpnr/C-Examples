#include<stdio.h>
#include<math.h>

void calculate();

float a, b, c, Q;
int main(void){
    printf("Please enter a-b-c>>");//getting variables from keyboard
    scanf("%f %f %f",&a,&b,&c);
    if(a>=0 && b>=0 && c>=0){
        calculate();
    }
    else return printf("Please enter non-negative numbers!!");    
}
void calculate(){
    Q=pow(a,2)/2+3*pow(b,3)-5*c/4;//the formula
    printf("Result>> %.3f",Q);
}