#include <iostream>
using namespace std;

int main() {
    
    for (int i = 0; i < 3; i++) {
        
        // Outer loop runs 3 times
        for (int j = 0; j < 2; j++) {
            
            // Inner loop runs 2 times for each
            // outer loop iteration
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
    return 0;
}
