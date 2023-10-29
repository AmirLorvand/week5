#include <iostream>
using namespace std;

int main() {
    cout << "Enter two numbers: \n";
    int number1, number2;
    cin >> number1;
    cin >> number2;
    int sum = 0;

    for (int i =number1; i <= number2; i++) {
        sum = sum + i;
    }
    
    cout << "Sum form " << number1 << " to " 
         << number2 << " is " << sum;

    return 0;
}