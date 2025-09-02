// This program defines a function to add two numbers and prints the result.
#include <iostream>
using namespace std;

int addNumbers(int a, int b) {
    return a + b; // Adds the two numbers and returns the result
}

int main() {
    int result = addNumbers(5, 3); // Calls the addNumbers function
    cout << "The sum is: " << result << endl; // Prints the result to the console
    return 0; // Indicates successful program execution
}
