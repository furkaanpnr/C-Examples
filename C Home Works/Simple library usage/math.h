

float permutation(int n, int r);
float combination(int n, int r);
int faktor(int x);


float permutation(int n, int r){
    int i,a,b;
    float per;
    if(n>r){
        a=n; 
        b=r;
    }
    else{
        a=r; 
        b=n;
        
    }
    per = faktor(a)/faktor(a-b);
    return per;
}

float combination(int n, int r){
    int i,a,b;
    float com;
    if(n>r){
        a=n; 
        b=r; 
        
    } 
    else{
        a=r; 
        b=n; 
        
    }
    com = faktor(a)/(faktor(b) * faktor(a-b));
    return com;
}


int faktor(int x)
{
    int i,faktor=1;
     for(i=1;i<=x;i++)
    {
         faktor = faktor * i;                 
    }   
    return faktor;
}