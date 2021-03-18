#include <stdio.h>


int main(int argc, char *argv[] )
{
	int start = 1;
	int val1 = 7;
	int val2 = 11;
	int val3 = 17;

	
	for ( int i = start; i <=200; i++ )
		
		if ( i%val1 == 0 && i%val2 == 0)
		{
			printf("%d and %d: %d\n", val1, val2, i);
		}
		else
		{
			if (i%val3 == 0)
			{
				printf("%d: %d\n", val3, i);
			}
		}





	return 0;
}
