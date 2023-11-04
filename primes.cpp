#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int number) {
    if (number == 0 || number == 1) {
        return false;
    }
    
    for (int i = 2; i < number; i++) {
        if ((number % i == 0)) {
            return false;
        }
    }
    return true;
    
} 

int main() {
 
    cout << "Enter an integer: ";
    int number;
    cin >> number;
    const int size = number + 1;
    int numbers[size];


    for (int i = 0; i < size; i++) {
        numbers[i] = i;
    }

    for (int i = 2; i < size; i++) {
        if(isPrime(numbers[i])) {
            cout << numbers[i] << " ";
        }
    } 
 
        return 0;
}