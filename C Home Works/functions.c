#include <stdio.h>

void pError(int error){
    printf("Error %d",error);
}
int main(void){
    int value;
    printf("Enter a value greather than 0 >");
    scanf("%d",&value);

    if(value<0) pError(404);
    else printf("thx!:]");

    return 0;
}