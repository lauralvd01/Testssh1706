int nfibo(int n);

int nfibo(int n){
    int f0 = 0;
    int f1 = 1;
    if(n==0){
        return f0;
    }
    if(n==1){
        return f1;
    }
    for(int i=2;i<=n;++i){
        int fpp = f0 + f1;
        f0 = f1;
        f1 = fpp;
    }
    return f1;
}

#include<stdio.h>
#include<stdib.h>

int main() {
    char stringn[20];
    printf("Entre n pour lequel tu souhaites calculer le n-ième nombre de Fibonacci");
    scanf("%s",stringn);
    int n = atoi(stringn);

    printf("le %d-ième nombre de Fibonacci est le %d.\n)",n,nfibo(n));
}
