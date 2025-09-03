// The return statement transfers control back to the caller
#include <iostream>
using namespace std;

// Function to add two numbers and returns the result
int add(int a, int b) {
    int sum = a + b;
    return sum; // Return the sum to the calling code
}

int main() {
    int res = add(3, 5);
    cout << "The sum is: " << res << endl;

    return 0;
}
