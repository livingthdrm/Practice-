#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double month1, month2, month3, month4;
    month1 = 2345.5678;
    month2 = 456.9876;
    month3 = 5432.54;
    month4 = 23.12;

    cout << setprecision(10);
    cout << "Month\t Reading\n";
    cout << 1 << "\t" << month1 << endl;
    cout << 2 << "\t" << month2 << endl;
    cout << 3 << "\t" << month3 << endl;
    cout << 4 << "\t" << month4 << endl <<endl <<endl;
    int fieldLength = 15;
    cout << setw(5) << "Month" << setw(fieldLength) << "Reading" << endl << endl << endl;
    cout << setw(5) << 1 << setw(fieldLength) << month1 <<endl;
    cout << setw(5) << 2 << setw(fieldLength) << month2 << endl;
    cout << setw(5) << 3 << setw(fieldLength) << month3 << endl;
    cout << setw(5) << 4 << setw(fieldLength) << month4 << endl;
    cout << endl << endl;

    return 0;
}
