#include <stdio.h>

int main(void){
    int a1,b1,c1,k1,
        a2,b2,c2,k2;
    float x,y; 
    printf("1. ve 2. Denklemi gir(aX+bY+c=k) seklinde.");
    
    printf("1.Denklemin a'si>");
    scanf("%d",&a1);
    printf("1.Denklemin b'si>");
    scanf("%d",&b1);
    printf("1.Denklemin c'si>");
    scanf("%d",&c1);
    printf("1.Denklemin k'si>");
    scanf("%d",&k1);

    printf("2.Denklemin a'si>");
    scanf("%d",&a2);
    printf("2.Denklemin b'si>");
    scanf("%d",&b2);
    printf("2.Denklemin c'si>");
    scanf("%d",&c2);
    printf("2.Denklemin k'si>");
    scanf("%d",&k2);

    y=((a1*k2-a1*c2+a2*c1-a2*k1)/a1)/((a1*b2-a2*b1)/a1);
    x=(k1-c1-b1*y)/a1;


    printf("x> %.2f     y> %.2f",x,y);
    



    return 0;
}