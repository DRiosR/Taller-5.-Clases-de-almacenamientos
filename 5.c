// Taller 5. Clases de almacenamientos
// Daniel_Rios_Rodriguez_372800
// 22/sep/2023
/*
5. Declara una variable global llamada pi con un valor de 3.14159 y otra variable
local con el mismo nombre en una función (Con diferente valor). Intenta acceder
a ambas variables desde diferentes partes del programa.
*/
// RRD_Taller5_act5
#include <stdio.h>

#include <stdio.h>

float pi = 3.14159; 
void valor();


int main()
{
    float pi=3.14;
    printf("Valor de pi  %f\n", pi);                                                                        
    printf("Valor de pi  %f\n", pi); 
    valor();

    return 0;
}
void valor()
{
    printf("Valor de pi %f\n",pi);
}

/*
¿Cuál es el resultado? Explica el concepto de ámbito y visibilidad.
la variable pi sale distinta si la usas desde el main que desde una funcion, con eso podemos
usar una variable en el main y otra igual global pero con otros datos y usarlas en la funciones.
*/