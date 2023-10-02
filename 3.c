// Taller 5. Clases de almacenamientos
// Daniel_Rios_Rodriguez_372800
// 22/sep/2023
/*
3. Declara una variable estática llamada contador en una función y muestra su
valor en cada llamada a la función.  *
*/
// RRD_Taller5_act3
#include <stdio.h>

void contador()
{
    // static declara una variable estática
    static int contador = 0;
    contador++;
    printf("Valor de contador: %d\n", contador);
}

int main()
{
    contador();
    contador();
    contador();
    contador();
    contador();
    contador();
    contador();
    contador();
    contador();
    contador();
    return 0;
}




/*
¿Qué sucede con la variable al salir de la
función? 
R= Aumenta el valor.
¿Cómo difiere de una variable automática?
R= que esta variable estatica solo aumenta el valor cuando la mandan a llamar.
*/