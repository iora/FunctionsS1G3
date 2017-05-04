#include <stdio.h>

/*	
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/

int getSum(int myArray[]);
int getSumOfSquares(int myArray[]);
void printAsChars(int myArray[]);
double getAverage(int myArray[]);
int subtractAllValues(int myArray[]);
float invertAllValues(int myArray[] );
void printGroupMemberNames();

int main(void) {
	printGroupMemberNames();

	int row[500];
	for (int i = 0; i < 500; i++)
		row[i] = i;

	return 1;
}
int getSum(int myArray[]) {
    // done by Piseth Chhom
    int getsum, s;
    for (s = 0; s < 500; s++){
        getsum += myArray[s];
    }
    return getsum;
}

void printAsChars(int myArray[]) {
    // done by Piseth Chhom
    for (int c = 0; c < 500; c++){
    printf("%c\n", myArray[c]);
    }
}

double getAverage(int myArray[]) {
	// done by Leng Saing
	double sum = 0;
	int index;
	for (index = 0; index < 500; index++) {
		sum += myArray[index];
	}
	return (sum / 500);
}

void printGroupMemberNames() {
	printf("Emsamboramy Vong\nLeng Saing\nPiseth Chhom\nRomanea Nin\nSovuthea Yi\n");
}

