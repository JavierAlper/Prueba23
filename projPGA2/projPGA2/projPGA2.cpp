// projPGA2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib> //include para el random

int main()
{
    //CODELAB SUMA DE DOS VECTORES DINAMICOS
    int random = rand() % 99; //para el tamaño de los arrays dinámicos
    //si utilizamos la funcion tiempo, podemos utilizar solo una variable porue cpge semilla segun x tiempo
   
    

    //reserva de bloques de memo
    int* pEnteros1 = (int*)malloc(sizeof(int) * random);
    int* pEnteros2 = (int*)malloc(sizeof(int) * random);
    int* pResultado = (int*)malloc(sizeof(int) * random);
    //entrada de numeros y suma 
   

    for (size_t  i = 0; i < random; i++) { //tamaño random de los vectores, metiendoles numeros random, size_t = unsigned int

        pEnteros1[i] = rand()%100;
        pEnteros2[i] = rand()%100; //utilizando corchetes, se puede hacer con aritmetica de `punteros
        //*(pEnteros+i) = rand()%100; aritmetica de punteros
      
    }
    
    for (size_t i = 0; i < random; i++) {
        pResultado[i] = pEnteros1[i] + pEnteros2[i];
        //sacar resultado por pantalla 
        printf("%d + %d = %d \n", pEnteros1[i],pEnteros2[i],pResultado[i]);
    }
    

   
  

    //liberar memoria
    free(pEnteros1);
    free(pEnteros2);
    free(pResultado);
    pEnteros1 = NULL;
    pEnteros2 = NULL;
    pResultado = NULL;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
