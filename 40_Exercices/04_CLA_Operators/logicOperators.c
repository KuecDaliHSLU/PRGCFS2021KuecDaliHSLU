#include <stdio.h>

int main (int argc, char *argv[] )
{
	// falls NICHT 3 Argumente erhalten, dann --> Block 7 bis 10
	if ( argc != 3 ){
		// input not valid
		printf("Usage:\n");
		printf("logicOperators Input1 Input2\n");
	}
	else
	{  	// input is valid --> genau 3 Argumente erhalten 
	
		printf("Number of input arguments: %d\n", argc ); // Anzahl Argumente printen
		
		// Die drei Elemente in der For-Loop-Deklaration
		// ---------------------------------------------
		// Nimm eine int-Variable i und starte mit 0
		// Führe folgenden Code aus, solange i < argc
		// Inkrementiere i bei jedem Durchlauf um 1 (++)
	
		for( int i = 0; i < argc; i++ )
		{
			printf("Argument %d was %s\n", i, argv[i]);
		}
	}
	return 0;
}



/*
	double e = 2.718281828;
	
	printf("%0.15f", e);
*/
