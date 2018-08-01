#include <iostream>
#include <cmath>
using namespace std;

double calc(double operand1, double operand2, char oper){
    double result;
    if (oper == '*' ){
        return operand1 * operand2;
    }
    else if(oper == '/'){
        return operand1 / operand2;
    }
    else if(oper == '+'){
        return operand1 + operand2;
    }
    else if(oper == '-'){
        return operand1 - operand2;
    }

}

int main(){

    double oper1, oper2;
    char op;
    cout << "Enter the expression: ";
    cin >> oper1 >> op >> oper2;
    while(true){
        cout << "Result " << calc(oper1, oper2, op) << endl;
        cout << "Enter the expression: ";
        cin >> oper1 >> op >> oper2;
    }

    /*double operand1, operand2, result;
    char op;
    cout << "Enter an expression (operand 1, operator, operand 2: " << endl;
    cin >> operand1 >> op >> operand2;

    if (op == '*'){
        result = operand1 * operand2;
        cout << "The result is: " << result << endl;
    }
    else if (op == '/'){
        result = operand1 / operand2;
        cout << "The result is: " << result << endl;
    }
    else if (op == '+'){
        result = operand1 + operand2;
        cout << "The result is: " << result << endl;
    }
    else if (op == '-'){
        result = operand1 - operand2;
        cout << "The result is: " << result << endl;
    }
    else {
        cout << "Bad expression." << endl;
    }
    /*else if (op = '%'){
        result = operand1 % operand2;
    }*/

    return 0;
}
