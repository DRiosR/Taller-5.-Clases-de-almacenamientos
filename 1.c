// Taller 5. Clases de almacenamientos
// Daniel_Rios_Rodriguez_372800
// 22/sep/2023
/*
1. Declara una variable automática llamada contador en una función. Incrementa
su valor en un bucle y muestra su valor en cada iteración. ¿Qué sucede con la
variable al salir de la función?
*/
// RRD_Taller5_act1
#include <stdio.h>

void funcionContador();

int main()
{
    funcionContador();
    return 0;
}
void funcionContador()
{
    int contador = 0;

    for (int i = 0; i < 10; i++)
    {
        contador++;
        printf("Valor de contador en la iteracion %d: %d\n", i, contador);
    }
}

/*
¿Qué sucede con la variable al salir de la función?
R=sale con el valor acumulado de los datos puestos.
*/