#include <stdio.h>


int main(int argc, char *argv[] )
{
	int start = 1;
	int val1 = 11;
	int val2 = 7;

	
	for ( int i = start; i <=200; i++ )
		
		if ( i%val1 == 0 )
		{
			if ( i%val2 == 0)
			{
				printf("%d and %d: %d\n", val1, val2, i);
			}
			else
			{
				printf("%d but not %d: %d\n", val1, val2, i);
			}
		}
		




	return 0;
}
