#include<stdio.h>
#include "funciones.h"

main(){
	int a, b;
	int* pa=&a;
	int* pb=&b;//Con esta orden coloco en los punteros las direcciones respectivas de 'a' y 'b'
	printf("El valor de 'a' es: %d \n ", a);
	printf("El valor de 'b' es: %d \n", b);
	intercambiar(pa, pb);
	printf("El nuevo valor de 'a' es: %d \n ", a);
	printf("El nuevo valor de 'b' es: %d \n", b);
}
