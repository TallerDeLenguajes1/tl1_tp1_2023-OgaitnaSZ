#include <stdio.h>

    int a = 10;

    int *p = &a;

int main(){
    printf("Hola mundo");

    printf("\nEl contenido del puntero es: %d", *p);
    printf("\nLa direccion de memoria almacenada en el puntero es: %d", p);
    printf("\nLa direccion de memoria del puntero es: %d", &p);

    printf("\nEl tamaño de memoria utilizado es: %d", sizeof(*p));

    return 0;
}