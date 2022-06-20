int nfibo(int n);

int nfibo(int n){
    f0 = 0;
    f1 = 1;
    if(n==0){
        return f0;
    }
    if(n==1){
        return f1;
    }
    for(i=2;i<=n;++i){
        fpp = f0 + f1;
        f0 = f1;
        f1 = fpp;
    }
    return f1;
}

#include<stdio.h>

int main() {
    n = ?;
    printf("le %d-ième nombre de Fibonacci est le %d.\n)",n,nfibo(n));
}
