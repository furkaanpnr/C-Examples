#include <stdio.h>
#include <string.h>

int main(){
    char ch[25]="Hello World";
    int lenght = strlen(ch);
    FILE *fp = fopen("test.txt","w");
    if(fp == NULL) printf("File could not be opened!");
    else{
        for(int i=0;i<lenght;i++){
            fputc(ch[i],fp);
            printf("Immediate character printed>>> %c\n",ch[i]);
        }
        printf("Printing to file completed successfully.");
        fclose(fp);
    }

    return 0;
}