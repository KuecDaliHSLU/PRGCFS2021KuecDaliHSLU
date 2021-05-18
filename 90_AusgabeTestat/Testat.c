#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "testatheader.h"



void writetoCSV(void) {
	FILE *deat;
	deat = fopen("pressureSpike.csv", "w+");
	assert(deat != NULL);
	// Data *tmp = dataList
	
	
	/*while (tmp->next != NULL) {
		fprintf(deat, "%d, ", tmp->timeStamp);
		fprintf(deat, "%d, ", tmp->pressure);
		fprintf(deat, "%d, ", tmp->systemState);
		fprintf(deat, "%c\n", tmp->alarmState);
		
		tmp = tmp->next;
		}
	fclose(deat);
}*/

const int BYTES_IN_LINE = 14;
			unsigned char lineBuffer[BYTES_IN_LINE]; 

while( fread(lineBuffer, BYTES_IN_LINE, 1, deat) )
		{
				fprintf("%dd, ", ((struct DataFrame *)lineBuffer)->timeStamp);
				fprintf("%d, ", ((struct DataFrame *)lineBuffer)->pressure);
				fprintf("%d, ", ((struct DataFrame *)lineBuffer)->systemState);
				fprintf("%d\n", ((struct DataFrame *)lineBuffer)->alarmState);
			
		}

	fclose(deat);
	}

