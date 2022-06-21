#include<stdio.h>
#include <string.h>

int main() {
    // Tableaux et chaînes
    int tab[] = {5,12,8,1};
    char st1[] = {'h','e','l','l','o','\0'};
    char st2[] = "hello";
    size_t lenst1 = strlen(st1);
    size_t  lenst2 = strlen(st2);

    printf("st1 =  %s\n",st1);
    printf("st2 = %s\n",st2);
    printf("len st1 = %ld\n",lenst1);
    printf("len st2 = %ld\n",lenst2);


    // Pointeurs
    int a = 5;
    printf("&a = %p\n",&a); // Affiche l'adresse de a
    int* p_a = &a;
    printf("p_a = %p\n",p_a); // Idem, affiche le pointeur de a
    printf("p_a+1 = %p\n",p_a+1); // Va afficherle pointeur de la case suivante !
    // Cela va suivre l'arithmétique des cases, comme ici a est un entier, le pointeur p_a+1 va être augmenté de 4 par rapport à p_a.
    // Si a était un char, l'écart (et donc l'arithmétique) va être différent :
    char b = 'i';
    char* p_b = &b;
    printf("p_b = %p\n",p_b);
    printf("p_b+1 = %p\n",p_b+1);
    printf("p_b+1-p_b = %ld\n",(p_b+1)-p_b);
}
