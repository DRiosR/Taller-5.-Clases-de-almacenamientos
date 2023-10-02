// Taller 5. Clases de almacenamientos
// Daniel_Rios_Rodriguez_372800
// 22/sep/2023
/*
4. Declara una variable de registro llamada temp y otra automática llamada valor
en una función. Compara el acceso y el tiempo de vida de estas variables.
*/
// RRD_Taller5_act4
// Inclusión de bibliotecas necesarias
#include <stdio.h> // Para funciones de entrada y salida como printf
#include <time.h>  // Para funciones relacionadas con el tiempo como time y difftime

// Declaración de la función funcionEjemplo
void funcionEjemplo()
{
    register int temp = 0; // Declaración de variable de registro llamada temp inicializada en 0
    int valor = 0;         // Declaración de variable automática llamada valor inicializada en 0

    // Bucle que realiza un gran número de operaciones con 'temp' y 'valor'
    for (long long i = 0; i < 1000000000; i++)
    {
        temp += i;  // Aumenta el valor de temp en i en cada iteración
        valor += i; // Aumenta el valor de valor en i en cada iteración
    }
}

// Función principal del programa
int main()
{
    time_t start, end;   // Declaración de variables para almacenar el tiempo al inicio y al final
    double elapsed_time; // Declaración de variable para almacenar el tiempo transcurrido

    start = time(NULL); // Almacena el tiempo actual antes de ejecutar funcionEjemplo
    funcionEjemplo();   // Llamada a la función funcionEjemplo
    end = time(NULL);   // Almacena el tiempo actual después de ejecutar funcionEjemplo

    // Calcula la diferencia en segundos entre el tiempo final e inicial y almacena el resultado en elapsed_time
    elapsed_time = difftime(end, start);

    // Imprime el tiempo de ejecución de funcionEjemplo en segundos
    printf("Tiempo de ejecucion: %f segundos\n", elapsed_time);

    return 0; // Retorna 0 al sistema operativo indicando que el programa ha finalizado correctamente
}

/*
¿Por qué usarías una variable de registro en lugar de una variable automática?
no sabria hacen lo mismo si fuera solo un int
*/