#include <stdio.h>
int main(){
    char *ap,c;
    c='x';
    ap=&c;

    printf("Caracter:%c\n",*ap);
    printf("Codigo ASCCI:%d\n",*ap);
    printf("Direccion de memoria: %p\n", ap);

    return 0;
}