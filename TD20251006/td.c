#include <stdio.h>
#include <stdbool.h>


int main(int argc, const char *argv[])
{
	char num_students = 23;			//number of students
	char num_chairs = 32;			//number of chairs

	short delta = 0;
	 delta = num_students - num_chairs;		//difference between 


	bool sw1 = true;		//lampe prof allumeé
	bool sw2 = true;		// lampe salle allumée

	unsigned char state = 0;

	state = sw1 + (sw2 << 4);

	//printf
	//1 arg : format 
	// => simple string "hello"
	// => cobination "x=%d" 
	// %d format base 10 (signed),
	// %u base 10 unsigned
	//%hd base 10 signes short
	printf("Number of students = %u, Number of chair = %u\n", num_students, num_chairs);

	printf("Delta =%hd\n", delta);

	printf("sw1=%d\n", sw1);
	printf("sw2=%d\n", sw2);

	printf("state=%X (base 16)\n", state);
	printf("state=%d (base 10)\n", state);
	printf("state=%o (base 8)\n", state);

	char a = 'A'; //ASCII code of 'A'=65
	printf("a=%d\n", a); // a=65
	printf("a=%c\n", a); // a=A

	char b = 112; //ASCII code of 'p'
	printf("b=%c\n", b); // a=p

	return 0;
}