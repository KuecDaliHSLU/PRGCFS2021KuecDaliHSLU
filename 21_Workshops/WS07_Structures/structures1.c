#include <stdio.h>
#include <string.h>


struct student
{
	char firstname[20];
	char lastname[30];
	float grades [6];
	float average;
};


int main(int argc, char *argv[] )
{
	struct student stud[5];
	
	strcpy(stud[1].firstname, "Tony");
	strcpy(stud[1].lastname, "Stark");
	stud[1].grades = {6.0, 5.8, 5.9, 6.0, 5.9, 6.0};
	
	printf("Noten: %e\n", stud[1].grades);

/*	
	strcpy(stud[2].firstname, "Peter");
	strcpy(stud[2].lastname, "Parker");
	stud[2].grades = 4.5, 4.8, 5.8, 3.2, 5.9, 5.2;
	
	strcpy(stud[3].firstname, "Bruce");
	strcpy(stud[3].lastname, "Banner");
	stud[3].grades = 5.5, 2.8, 5.3, 4.8, 5.4, 4.5;
	
	strcpy(stud[4].firstname, "Steve");
	strcpy(stud[4].lastname, "Rodgers");
	stud[4].grades = 4.9, 3.9, 5.8, 2.3, 4.3, 5.4;
	
	strcpy(stud[5].firstname, "Natasha");
	strcpy(stud[5].lastname, "Romanoff");
	stud[5].grades = 5.3, 5.2, 5.1, 5.7, 4.9, 5.9;
	
*/	
	//printf("Vorname: %s\n", s1.firstname);
		






	return 0;
}
