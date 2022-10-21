#include <stdio.h>
#include <string.h>

void do_reverse(char text[]){
    int i,length,passing;
    length=strlen(text);
    for(i=0;i<length/2;i++){
        passing=text[i];
        text[i]=text[length-1-i];
        text[length-1-i]=passing;
    }
}

int main(){
    char ch[200];
    printf("Enter something taht you want to reverse print>>> ");
    scanf("%s",ch);
    do_reverse(ch);
    printf("Reverse>>> %s",ch);

    return 0;
}

