#include <iostream>
using namespace std;

int main(){
    /*double balance, rate;
    int years;
    cout << "What is the beginning balance? ";
    cin >> balance;
    cout << "What is the annual rate? ";
    cin >> rate;
    cout << "What is the number of years? ";
    cin >> years;
    for (int i = 1; i <= years; i++){
        balance *= rate;
    }
    cout << balance;

    ********************************************************************************************

    int num1, num2, product;
    product = 0;
    cout << "What is the value of num1? ";
    cin >> num1;
    cout << "What is the value of num2? ";
    cin >> num2;
    for (int i = 1; i <= num1; i++){
        product += num2;
    }
    cout << "Result = " << product;

    ********************************************************************************************

    for (int row = 1; row <= 5; ++row){
        for (int col = 1; col <= 5; ++col){
            cout << "x ";
        }
        cout << endl;
    }

    cout << endl << endl << endl;

    for(int row = 1; row <=5; ++row){
        for(int col = 1; col <= row; ++col){
            cout << "x ";
        }
        cout << endl;
    }

    **********************************************************************************************
    */

    for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= 10; j++){
            cout << i << " * " << j << " = " << i * j << "\t" << endl;
        }
        cout << endl;
    }
    return 0;
}
