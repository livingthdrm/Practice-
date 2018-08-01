#include <iostream>
using namespace std;

int main(){
    /*string myPassword = "letmein";
    cout << (myPassword == "password") << endl; //0
    cout << (myPassword != "password") << endl; //1

    int hoursWorked = 47;
    cout << (hoursWorked > 40) << endl; //1
    cout << (hoursWorked >= 40) << endl; //1

    double hourlyRate = 25.00;
    cout << (hourlyRate < 20) << endl; //0
    cout << (hourlyRate <= 25) << endl; //1

    int hoursWorketh = 40;
    double hourlyRateth = 9.57;
    cout << ((hoursWorketh <1) || (hoursWorketh >56)) << endl;//0
    cout << ((hourlyRateth >= 9) && (hoursWorketh = 40)) << endl;//1
    cout << !(hourlyRateth = 9.57) << endl;//0

    int hours;
    double rate, grossPay;
    cout << "Enter the hours worked: ";
    cin >> hours;
    cout << "Enter the rate of pay: ";
    cin >> rate;
    if (hours <= 40){
        grossPay = hours * rate;
    }
    else {
        grossPay = (40 * rate) + ((hours - 40) * (rate * 1.5));
    }
    cout << "Gross Pay is: " << grossPay << endl;*/

    int grade;
    string letterGrade;
    cout << "Enter you grade" << endl;
    cin >> grade;

    if ((grade > 100) || (grade < 0)){
        cout << "Invalid Argument";
    }
    else if (grade >= 90){
        letterGrade = "A";
        cout << letterGrade;
    }
    else if (grade >= 80){
        letterGrade = "B";
        cout << letterGrade;
    }
    else if (grade >=70){
        letterGrade = "C";
        cout << letterGrade;
    }
    else if (grade >= 60){
        letterGrade = "D";
        cout << letterGrade;
    }
    else {
        letterGrade = "E";
        cout << letterGrade;
    }
    return 0;
}
