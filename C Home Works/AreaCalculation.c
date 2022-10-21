#include <stdio.h>
#include<math.h>
#define PI 3.1415

int main()
{
    int Number;
    float r,a,b,h,Area;
    printf("Which shape will we calculate the area of?\n");
    printf("If you want to exit the program plese enter (-1)\n");
    printf("1 - Half circle >>\n");
    printf("2 - Isosceles triangle >>\n");
    printf("3 - Trapezoid >> \n");
    printf("Chose an option>>");
    scanf("%d",&Number);
    if(Number ==1 ){
        printf("<<<Calculation of the area of the half circle>>> \n");
        printf("Enter the radius of the circle>>");
        scanf("%f",&r);
        Area = (PI*r*r)/2;
        printf("The half area of the circle is >%f",Area);
    }
    else if(Number == 2){
        printf("<<<Calculation of the area of the Isosceles tr,angel>>> \n");
        printf("Enter the base value of triangel(b)>>");
        scanf("%f",&b);
        printf("\nEnter the height of the triangle(h)>>");
        scanf("%f",&h);
        Area=(b*h)/2;
        printf("The area of isosceles of the triangle is >%f",Area);
        
    }
    else if(Number==3){
    printf("<<<Calculation of the are of the trapezoid>>>");
    printf("Enter the top of the are of the trapezoid(a)>>");
    scanf("%f",&a);
    printf("Enter the bottom edge of trapezoid(b)>>");
    scanf("%f",&b);
    printf("Enter the height of the trapezoid(h)>>");
    scanf("%f",&h);
    Area=((a+b)*h)/2;
    printf("The are of the trapezoid is >%f",Area);
}else{
    printf("Exitting the program...");
}
    return 0;
}