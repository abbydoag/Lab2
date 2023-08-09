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
#ifdef _OPENMP
#include <omp.h>
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
		return result;
	}
}
main ()
{

	int matrixa[N],matrixb[N];
	int i, j;
	
	for (i=0; i<N; i++) matrixa[i] = i;
	for (i=0; i<N; i++) matrixb[i] = i;

	

	// impresion de resultados
	printf ("\n Vector A, consecutive distribution \n\n");
	printf (" 0 1 2 3 4 5 6 7 8 9\n");
	printf ("-----------------------------------------\n");
	
	for (i=0; i<N/10; i++)
	{
		printf ("\n");
		for (j=i*10; j<(i+1)*10; j++) printf("%3d ", matrixa[j]);
		printf ("\n");
	}
	
	printf ("\n\n");
	printf (" Vector B, interlaced distribution \n\n");
	printf (" 0 1 2 3 4 5 6 7 8 9\n");
	printf ("-----------------------------------------\n");
	for (i=0; i<N/10; i++)
	{
		
		printf ("\n");
		for (j=i*3; j<(i+1)*3; j++) printf("%3d ", matrixb[j]);
		printf ("\n");
	}
	printf ("\n");
}