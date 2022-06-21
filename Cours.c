#include<stdio.h>
#include <string.h>

int main() {
    int tab[] = {5,12,8,1};
    char st1[] = {'h','e','l','l','o','\0'};
    char st2[] = "hello";
    size_t lenst1 = strlen(st1);
    size_t  lenst2 = strlen(st2);

    printf("st1 =  %s\n",st1);
    printf("st2 = %s\n",st2);
    printf("len st1 = %ld\n",lenst1);
    printf("len st2 = %ld\n",lenst2);
}
