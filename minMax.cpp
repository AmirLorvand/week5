#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0)); // Initialize random number generator
    int numbers[10];
    
    cout << "Please enter random numbers: ";
    
    for(int i = 0; i < 10; i++) {
        int random = (rand() % 100) + 1;
        cout << random << " ";
        numbers[i] = random;
    }
    cout << "\n";

    int max = numbers[0];

    for (int i = 0; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    int min = numbers[0];

    for (int i = 0; i < 10; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    cout << "Minimum is " << min << " Maximum is " << max;

    return 0;
}