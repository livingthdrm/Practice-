#include <iostream>
using namespace std;

int main(){
    /*int number;
    cin >> number;
    cout << number;
    int number1, number2, result;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    result = number1 * number2;
    cout << "number1 * number2 =\t" << result << endl <<endl <<endl;

    string fullName;
    cout << "Enter your full name: " << endl;
    getline(cin, fullName);
    cout << "Your full name is: " <<endl;*/

    string name, gift, city, yourName;
    int age;
    cout << "Enter the name: " << endl;
    getline(cin, name);
    cout << "Enter the gift: " << endl;
    getline(cin, gift);
    cout << "Enter the name of the city: " << endl;
    getline(cin, city);
    cout << "Enter your name" << endl;
    getline(cin, yourName);
    cout << "Enter your age" << endl;
    cin >> age;
    cout << endl << endl << endl;
    cout << "Dear " << name <<"." << endl;
    cout << "Thank you for the " << gift << ". I really like it. I can't believe I'm already"
    << age << " years old, but it doesn't feel different than being" << age-1 << endl;
    cout <<" years old. I hope that sometime in the next"
    << "year we can come visit in " << city <<"." <<endl;
    cout << "Thank you again for the" << gift << "." <<endl;
    cout << "Sincerely.";
    cout << yourName <<endl << endl;
    return 0;
}
