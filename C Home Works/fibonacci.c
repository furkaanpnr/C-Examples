#include <stdio.h>

int main(void){
    int i,n;
    printf("Enter a number> ");
    scanf("%d",&n);
    int A[n];
    A[0]=0;
    A[1]=1;
    for(i=1;i<=n;i++){
        A[i+1]=A[i]+A[i-1];
        printf("%d.>> %d\n",i,A[i]);
    }
    
    return 0;
}