#include <iostream>
#include <cmath>
using namespace std;

int main (){
    /*string answer = "Watson";
    string response;
    int tries = 1;

    cout << "Let's play a guessing game" <<endl;
    cout    << "You have three tries" << endl;

    while (tries <= 3){
        cout << "What is the name of the computer that played Jeorpardy? ";
        getline (cin, response);
        if (response == answer){
            cout << "That's right!" <<endl;
            tries = 4;
        }
        else if (response != answer){
                if (tries == 1){
                    cout << "That's not correct. Try again!" <<endl;
                    ++tries;
                }
                else if (tries == 2){
                    cout << "That's still not correct. Try again!" <<endl;
                    ++tries;
                }
                else if (tries == 3){
                    cout << "That's still not correct. Out of tries. The correct answer is: " << answer <<endl;
                    ++tries;
                }

        }
    }
***************************************************************************************************************************
    int number, factorial;
    cout << "Enter a number: ";
    cin >> number;
    factorial = 1;

    for (int i = number; i >= 1; --i){
        factorial *= i;
    }
    cout << number << "! equals " << factorial << endl;

    ************************************************************************************************************************
    */

    int data1, data2, data3;
    cout << "Enter the first data ";
    cin >> data1;
    cout << "Enter the second data ";
    cin >> data2;
    cout << "Enter the third data ";
    cin >> data3;
    for (int i = 1; i <= data1; ++i){
        cout << "x ";
    }
    cout << data1 << endl;
    for (int i = 1; i <= data2; ++i){
        cout << "x ";
    }
    cout << data2 << endl;
    for (int i = 1; i <= data3; ++i){
        cout << "x ";
    }
    cout << data3 << endl;
    return 0;
}
