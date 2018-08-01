#include <iostream>
#include <cmath>
using namespace std;

/*int square (int number){                            //function definition
    int squared = pow(number, 2);
    return squared;
}

int main(){
    int number, squared;
    cout << "Enter a number: ";
    cin >> number;
    squared = square(number);
    cout << squared;                             //calling a function
    return 0;

}

************************************************************************************************************************
*/
int maximum (int num1,int num2,int num3){
    int largest;
    if (num1 > num2){
            largest = num1;
    }
    else {
        largest = num2;
    }
    if (num3 > largest){
        largest = num3;
    }
    return largest;
}

double ftoc (double temp){
    return (temp - 32.0) * (5.0/9.0);
}

double ctof (double temp){
    return (temp * (9.0/5.0) + 32.0);
}

double convertTemp (double temp, char scale){
    if (scale == 'c'){
        return ftoc(temp);
    }
    else if (scale == 'f'){
        return ctof(temp);
    }
}

bool isEven (int number) {  //predicate function
    return ((number % 2) == 0);
}

bool isVowel (char letter){
    if ((letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o') || (letter == 'u')){
        return true;
        }
    else {
        return false;
    }
}

void heading(string name, string date){
    cout << "Name: " << name <<endl;
    cout << "Date: " << date <<endl;
}

int main (){
    /*int num1, num2, num3, max;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    max = maximum(num1, num2, num3);
    cout << "The maximum number is: " << max;
    **************************************************************************************************
    double farTemp, celcius;
    cout << "Enter a fahrenheit temperature: ";
    cin >> farTemp;
    celcius = ftoc(farTemp);
    cout << farTemp << " fahrenheit temperature is equal to " << celcius << " celcius.";
    **************************************************************************************************


    double farTemp, celcius;
    cout << "Enter the celcius temperature: ";
    cin >> celcius;
    farTemp = ctof(celcius);
    cout << celcius << " celcius temperature is equal to " << farTemp << " fahrenheit.";

    ***************************************************************************************************/

    /*double temp, convertedTemp;
    char tempScale;
    cout << "Enter a temperature and a scale to convert to: ";
    cin >> temp >> tempScale;
    convertedTemp = convertTemp(temp, tempScale);
    cout << "The converted temperature is " << convertedTemp << "." << endl;

    ****************************************************************************************************

    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isEven(num)){
        cout << num << " is even" <<endl;
    }
    else {
        cout << num << " is odd" <<endl;
    }

    ****************************************************************************************************/

    char ltr;
    cout << "Enter a letter: ";
    cin >> ltr;
    if (isVowel(ltr)){
        cout << ltr << " is a vowel" <<endl;
    }
    else {
        cout << ltr << " is a consonant" <<endl;
    }

    heading("Immaculate", "03/07/2018");
    return 0;
}
