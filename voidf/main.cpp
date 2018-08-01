#include <iostream>
using namespace std;

void swap(int& num1, int& num2){ //reference function (&)
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main(){
    int number1, number2;
    number1 = 12;
    number2 = 13;
    cout << "number 1: " << number1 <<endl;
    cout << "number 2: " <<number2 <<endl;
    swap(number1, number2);
    cout << "number 1: " << number1 <<endl;
    cout << "number 2: " <<number2 <<endl;
    return 0;
}
