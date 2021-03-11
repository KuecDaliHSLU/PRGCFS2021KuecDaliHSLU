#include <stdio.h>

int main(int argc, char *argv[] ) 
{
	int sum = 0;
	int start = 1;
	int end = 100;
	
	for ( int i = start; i <= end; i += 10 )
	{
		printf("\n%d", i);
		
		for( int j = i; j <= i+10; j++)
		{
			printf("%d", j);
		}
				
	}
	
	printf ("\n");
	return 0;
}
