#include "exercice7.h"
#include<stdio.h>

// Affiche les entiers enregistrés dans un tableau de longueur len
void print_tableau(int tab[],int len){
    for(int i = 1;i<=len;++i){
        printf("|%d|",tab[i]);
    }
}

// Stocke dans un tableau les nombres pairs plus petits que 100, et affiche ce tableau
int main() {
    int tab[100];
    for(int i=1;i<=100;++i){
        if(i%2==0){
            tab[i]  = i;
        }
    }
    print_tableau(tab,100);
}
