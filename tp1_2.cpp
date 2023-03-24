#include <stdio.h>
    int num, a, b;

    int devolverCuadrado(int num);
    void devolverCuadrado2(int *num);
    void invertir(int *a, int *b);
    void ordenar(int *a, int *b);

int main(){
    /*
    printf("Escriba un numero: ");
    scanf("%d",&num);
    printf("\nEl valor del numero es: %d", num);
    devolverCuadrado2(&num);
    printf("\nSu cuadrado es: %d",num);
    printf("\nLa direccion de memoria es: %d", &num);
    printf("\nY su contenido: %d", num);
    */

    printf("Escriba un numero: ");
    scanf("%d",&a);
    printf("Escriba otro numero: ");
    scanf("%d",&b);

    printf("Los numeros son: a=%d y b=%d", a,b);
    invertir(&a, &b);
    printf("\nLas numeros invertidos son: a=%d y b=%d", a,b);
    
    printf("\nEl valor mas chicho quedara en a");
    ordenar(&a, &b);
    printf("\nLos valores ahora son: a=%d y b=%d", a,b);

    return 0;
}

int devolverCuadrado(int num){
    return num*num;
}
void devolverCuadrado2(int *num){
    *num = *num * *num;
}
void invertir(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}
void ordenar(int *a, int *b){
    if(*a > *b){
        int c = *a;
        *a = *b;
        *b = c;
    }
}