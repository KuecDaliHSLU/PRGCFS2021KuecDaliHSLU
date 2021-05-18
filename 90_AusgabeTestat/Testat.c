#include <stdio.h>
#include <stdlib.h>
#include <assert.h>




// declare a struct, matching the dataframe

typedef struct DataFrame Data;

struct DataFrame {
	long long timeStamp;
 	int pressure;
 	char systemState;
 	char alarmState;
 	
 	Data *next;
};

Data *dataList;

int main()
{
	FILE *fin = fopen("pressureSpike.bin", "rb");
	// check if file opening worked
	if( fin != NULL )
	{
		// prepare a buffer of correct length
		const int BYTES_IN_LINE = 14;
		unsigned char lineBuffer[BYTES_IN_LINE]; 
		
		// read dataframe by dataframe 
		while( fread(lineBuffer,BYTES_IN_LINE, 1, fin) )
		{
			// the trick here is to pretend each line is a copy of a dataframe
			// --> casting the "lineBuffer" to a pointer to the struct --> each field accessible directly!
			printf("time: %lld, ", ((struct DataFrame *)lineBuffer)->timeStamp);
			printf("pressure: %d, ", ((struct DataFrame *)lineBuffer)->pressure);
			printf("System State: %d, ", ((struct DataFrame *)lineBuffer)->systemState);
			printf("Alarm State: %d\n", ((struct DataFrame *)lineBuffer)->alarmState);
			
			// anstellen von "printf"s kann man natürlich jetzt das Felder systemStata weiter auspacken..
			// -> BitOps... 
			
		}

	
	}
	
	FILE *deat = fopen("pressureSpike.csv", "w+");
	assert(deat != NULL);
	Data *tmp = dataList;
	
	
	while (tmp->next != NULL) {
		fprintf(deat, "time: %lld, ", tmp->timeStamp);
		fprintf(deat, "pressure: %d, ", tmp->pressure);
		fprintf(deat, "System State: %d, ", tmp->systemState);
		fprintf(deat, "Alarm State: %d, ", tmp->alarmState);
		
		tmp = tmp->next;
		}
	fclose(deat);
	

	return 0;
}


