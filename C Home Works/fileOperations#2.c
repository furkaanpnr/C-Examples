#include <stdio.h>
#include <string.h>

int main(){
    FILE *writeOnFile;
    char writtenLenght[38]= "The wheather is sunny in Istanbul today.";

    writeOnFile=fopen("write.txt","w");

    if(writeOnFile==NULL){
        printf("write.txt couldn't open!");

    }
    else{
        printf("The file succesfuly opened.\n");

        if(strlen(writtenLenght)>0){
            fputs(writtenLenght,writeOnFile);
            printf("\n",writeOnFile);
        }
        fclose(writeOnFile);
        printf("Data succesfully written in file write.txt \n");
        printf("The file is closed.");
    }
    return 0;
}