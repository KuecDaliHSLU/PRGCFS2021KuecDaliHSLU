#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[] )
{
	int n = atoi(argv[1]);
	int k = atoi(argv[2]);
	int nchoosek = 0;
	int fakultaet (int x)
	{
		if (x > 1)
		{
			return x * fakultaet (x-1);
		}
		else
		{
			return 1;
		}
		
	}
	if ((n < 0 && k < 0) || n < 0 || k < 0)
	{
		printf("n und/oder k dürfen nicht kleiner als 0 sein.");
	}
	else
	{
		if (n < k)
		{
			printf("n darf nicht kleiner als k sein");
		}
		else
		{
			nchoosek = fakultaet(n)/(fakultaet(k)*fakultaet(n-k));
	
			printf("n tief k mit n = %d und k = %d ist %d", n, k, nchoosek);
		}
	}








	return 0;
}
