#include <stdio.h>

int main(int argc, char *argv[] ) 
{
	int sum = 0;
	int start = 40;
	int end = 25;
	
	for ( int i = start; i >= end; i-- )
	{
		sum = start - i;
		printf("%d\n", i);
	}
	
	return 0;
}
