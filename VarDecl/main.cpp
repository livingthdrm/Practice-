#include <iostream>
using namespace std;

int main()
{
    string firstName, middleName, lastName, fullName;
    int age = 23;

    firstName = "Joseph";
    middleName = "Salaon";
    lastName = "Lesaloi";
    fullName = firstName + " " + middleName + " " + lastName;

    cout << "Hello" << " " << firstName << " " << middleName << " " << lastName << endl;
    cout <<endl;
    cout << "Hello" << " " << fullName << endl << "You are" << " " << age << " " << "years old." <<endl;
    cout << "Next year you will be" << " " << age +1 << " "<<"years old.";
    cout <<endl;
    return 0;
}
