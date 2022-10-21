#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
int main(){
srand(time(NULL));
int sayi=rand()%100;
int tahmin;

while(sayi){
printf("Uretilen sayiyi tahmin ediniz>>");
scanf("%d",&tahmin);


if(sayi<tahmin){
printf("asagi\n");
}
else if(sayi>tahmin){
printf("yukari\n");

}
else {
    printf("Tebrikler bildiniz :D \nUretilen Sayi: %d",sayi);
    break;
    }
}

getch();
return 0; 
}