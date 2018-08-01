#include <iostream>

using namespace std;

int qualityPoints(char letterGrade){
    int qPoints;
    if (letterGrade == 'A'){
        qPoints = 4;
    }
    else if (letterGrade == 'B'){
        qPoints = 3;
    }
    else if (letterGrade == 'C'){
        qPoints = 2;
    }
    else if (letterGrade == 'D'){
        qPoints = 1;
    }
    else {
        qPoints = 0;
    }
    return qPoints;
}

string getInitials (string first, string middle, string last){
    string firstInit, middleInit, lastInit;
    firstInit = first.substr(0, 1);
    middleInit = middle.substr(0,1);
    lastInit = last.substr(0,1);
    return firstInit + middleInit + lastInit;
}

int main(){
    /*char grade;
    cout << "Enter the letter grade: ";
    cin >> grade;
    cout << "A " << grade << " earn you " << qualityPoints(grade) << " quality points";*/
    string first, middle, last;
    cout << "Enter your first name: ";
    getline(cin, first );
    cout << "Enter the middle name: ";
    getline(cin, middle);
    cout << "Enter the last name: ";
    getline(cin, last);
    cout << "your initials are: " << getInitials(first, middle, last);
    return 0;
}
