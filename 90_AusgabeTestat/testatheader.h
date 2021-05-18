#ifndef _HEADER_H_
#define _HEADER_H_



typedef struct DataFrame Data;

struct DataFrame {
	long long timeStamp;
 	int pressure;
 	char systemState;
 	char alarmState;
 	
 	Data *next;
};

Data *dataList;

void writetoCSV(void);


#endif // _HEADER_H_
