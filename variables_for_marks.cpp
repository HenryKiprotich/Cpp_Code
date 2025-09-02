#include <iostream>
using namespace std;

// Student data
int studentID = 15;
int studentAge = 23;
float studentFee = 75.25;
char studentGrade = 'B';

/*You need to place the print statements
inside a function, such as main(), because 
C++ does not allow executable statements 
at the global scope.*/

int main() {
	// Print variables
	cout << "Student ID: " << studentID << "\n";
	cout << "Student Age: " << studentAge << "\n";
	cout << "Student Fee: " << studentFee << "\n";
	cout << "Student Grade: " << studentGrade << "\n";
	return 0;
}
