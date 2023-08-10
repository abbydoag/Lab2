/*
*----------------------------------------
* Lab2.c
* ---------------------------------------
* UNIVERSIDAD DEL VALLE DE GUATEMALA
* CC3086 - Programacion de Microprocesadores
* Laboratorio No.2
* ---------------------------------------
*
* Analizar código y explicar cuál es el 
* funcionamiento del programa.
* Corregir código y documentar.
*
*----------------------------------------*/
#include <stdio.h>
#include <omp.h>
#include <stdlib.h>
#ifdef _OPENMP
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

#else
#define omp_get_thread_num() 0
#define omp_get_num_threads() 1
#endif
#define N 9

void generateRandom (int k[]){
	for (int i=0; i<N;i++){
		k[i]= rand()%100; 
	}
}

int productoPunto(int A[], int B[]){
	int result = 0;
	for (int i=0;i<N;i++){
		result = result+A[i]*B[i];
	}
    return result;
}
int main ()
{
	int matrixa[N],matrixb[N];
	int i, j;
	int loop;
	
	for (i=0; i<N; i++) matrixa[i] = i;
	for (i=0; i<N; i++) matrixb[i] = i;

    generateRandom(matrixa);
    generateRandom(matrixb);

    //Operación
    int dotProduct = productoPunto(matrixa, matrixb);

	// impresion de resultados
	printf ("\n Vector A, consecutive distribution \n\n");
	
	
	for(loop = 0; loop < N; loop++)
      printf("%d ", matrixa[loop]);

	printf ("\n\n");
	printf (" Vector B, interlaced distribution \n\n");
	
	for(loop = 0; loop < N; loop++)
      printf("%d ", matrixb[loop]);

	printf ("\n");
    printf("\n\n Producto Punto: %d\n", dotProduct);
    return 0;
}