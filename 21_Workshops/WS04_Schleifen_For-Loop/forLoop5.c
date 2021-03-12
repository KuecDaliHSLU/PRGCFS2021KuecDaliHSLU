#include <stdio.h>

int main(int argc, char *argv[] ) 
{
	int start = 0;
	int end = 99;
	
	
	// 1. For-Loop für Spalte, beginnt bei 1 und erhöht sich um 10 bis 99
	for ( int i = start; i < end; i+=10 )
	{
		// muss hier nur Spalte printen und noch keine Werte
		printf("\n");
		
		// 2. For-Loop für Zeilen, beginnt bei 1 und erhöht sich immer um 1 bis 10
		for( int j = 1; j<=10; j++ )
		{
			// i + j werden addiert und anschliessend geprinted
			int sum = i + j;
			printf("%d ", sum);
		}
		

				
	}
	
	// gibt am Ende der Zeile eine neue Linie
	printf ("\n");
	return 0;
}
