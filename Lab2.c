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

#define N 9
main ()
{

	int matrix[N],[N];
	int i, j;
	
	for (i=0; i<N; i++) A[i] = i;
	for (i=0; i<N; i++) B[i] = i;
	
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			matrix[i][j] = rand()%100+1;
		}
	}

	// impresion de resultados
	printf ("\n Vector A, consecutive distribution \n\n");
	printf (" 0 1 2 3 4 5 6 7 8 9\n");
	printf ("-----------------------------------------\n");
	
	for (i=0; i<N/3; i++)
	{
		printf ("\n");
		for (j=i*3; j<(i+1)*3; j++) printf("%3d ", A[j]);
		printf ("\n");
	}
	
	printf ("\n\n");
	printf (" Vector B, interlaced distribution \n\n");
	printf (" 0 1 2 3 4 5 6 7 8 9\n");
	printf ("-----------------------------------------\n");
	for (i=0; i<N/3; i++)
	{
		
		printf ("\n");
		for (j=i*3; j<(i+1)*3; j++) printf("%3d ", B[j]);
		printf ("\n");
	}
	printf ("\n");
}