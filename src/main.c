#include <stdio.h>
#include <stdlib.h>
#include "precio.h"

int main(){
    precio arr[100];
    arr[0].met=1;
    arr[0].val=80;
    int opt, metros, valor;
    precio *a;
    a=arr;

    while (1){
        printf("Elija una opcion:\n");
        printf("1 - Comprar soga\n");
        printf("3 - Terminar programa\n");
        scanf("%i", &opt);
        switch (opt){
            case 1:
                printf("Ingrese los metros de cuerda que desea comprar\n");
                scanf("%i", &metros);
                valor = costo(metros, a);
                printf("El costo es: %i\n", valor);
                break;
            case 2:
                printf("Precios estandar\n");
                for(int i=0; i<arr->len;i++){
                    printf("%im = $%i\n",arr[i].met, arr[i].val);
                }
                break;
            case 3:
                return 0;
        }
    }
}