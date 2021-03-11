#include <stdio.h>

int main(int argc, char *argv[] ) 
{
	int sum = 0;
	int start = 1;
	int end = 729;
	
	for ( int i = start; i <= end; i*=3 )
	{
		sum = start - i;
		printf("%d\n", i);
	}
	
	return 0;
}
