#include <stdio.h>

int main(int argc, char *argv[] ) 
{
	int sum = 0;
	int start = 2;
	int end = 10;
	
	//Zahl wird immer um 2 erhöht
	for ( int i = start; i <= end; i+=2 )
	{
		sum = sum + i;
	}
	
	printf("The sum from every even number from %d to %d is equal to %d\n", start, end, sum);
	return 0;
}
