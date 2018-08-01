#include <iostream>
using namespace std;

int main(){
    /*int count = 1;
    while (count <= 10){
        cout << "Hello World" << endl;
        ++count;
    }
    int count;
    for (count = 1; count <= 10; ++count){
        cout << "Hello World" << endl;                             count - controlled loops
    }
    ************************************************************************************************
    double balance, rate;
    int years, count;
    cout << "Enter the starting balance: " << endl;
    cin >> balance;
    cout << "Enter the annual rate of interest: " <<endl;
    cin >> rate;
    cout << "Enter the number of years: " << endl;
    cin >> years;
    count = 1;
    while (count <= years){
        balance *= rate;
        cout << "Your balance after " << count << " " << "years is: " << balance <<endl;
        ++count;
    }
    cout << endl << endl << endl;
    cout << "You total balance is now: " << balance <<endl;

    ************************************************************************************************

    int num1, num2, product, count;
    product = 0;
    count = 1;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    while (count <= num1){
        product += num2;
        //cout << product <<endl;
        ++count;
    }
    cout << "The product of number 1 and number 2 is: " << product <<endl;

    ************************************************************************************************

    int grade, numGrades, gradeTotal;                                       //sentinel Controlled loop
    double average;

    numGrades = gradeTotal = 0;
    cout << "Enter a grade: ";
    cin >> grade;
    while (grade != -1){
        gradeTotal += grade;
        ++numGrades;
        cout << "Enter a grade: ";
        cin >> grade;
    }
    average = gradeTotal / numGrades;
    cout << " The average grade is: " << average;

    *************************************************************************************************
    */

    double balance, rate;                                           //target controlled loop
    int years, target;
    years = 0;
    cout << " What is the beginning balance? ";
    cin >> balance;
    cout << "What is the annual rate of interest? ";
    cin>> rate;
    cout << "What is the target balance? ";
    cin >> target;
    while (balance < target){
        balance *= rate;
        ++years;
    }
    cout << "It will take " << years << " " << "years to reach a target of " << target << endl;
    return 0;
}
