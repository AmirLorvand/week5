#include <iostream>

using namespace std;

int main() {
    
    int numbers[100] = {0};
    int total = 0;
    int numbersEntered = 0;


    for (int i = 0; i < 100; i++) {
            cout << "Enter an integer (-1 to end): ";
            cin >> numbers[i]; //enters number into array
            if(numbers[i] == -1) {
                numbers[i] = 0;
                numbersEntered = i;
                break;
            }
            
    } 

    for (int i = 0; i < 100; i++) {

        total = total + numbers[i];

    }

    total = total / numbersEntered;


    cout << total;
    

}