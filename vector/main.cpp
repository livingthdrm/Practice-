#include <iostream>
#include <vector>
using namespace std;

/*int main(){
    vector<int> grades;
    int grade, total;
    double average;
    total = 0;
    for (int i = 1; i <= 5; ++i){
        cout << "Enter a grade: ";
        cin >> grade;
        grades.push_back(grade);
    }
    for (int i = 0; i < grades.size(); ++i){
        total += grades[i];
        average = total / grades.size();
    }
    cout << "The average is: " << average <<endl;
    return 0;
}

/*
vector<string> names;                       ways to initialize a vector

vector<string> names(10);

vector<string> names(10, " ");

***************************************************************************************************
adding data to vector

vector<string> names;
names.push_back("David");
names.push_back("Dukes");
names.push_back("Raymond");

names[0] = "David";
names[1] = "Cynthia";

vector<int> numbers(1000, 0);

***************************************************************************************************
accessing data from vector

vector<int> grades;
int grade, total;
total = 0;
for (int i = 0; i <= 5; ++i){
    cout << "Enter a grade: ";
    cin >> grade;
    grades.push_back(grade);
}
total = grade[0] + grade[1] + grade[2] + grade[3] + grade[4];
cout << "The total of the grades is: " << total << endl;

******************************************************************
total = 0;
for (int i = 0; i < grades.size(); ++i){
    total += grades[i];
}
cout << "The total of the grades is: " << total << endl;
return 0;

******************************************************************

vector<string> names;
names.push_back("Penninah");
names.push_back("Terry");
names.push_back("Immaculate");
names.push_back("Sharon");
for (int i = 1; i < names.size(); ++i){
    cout << names[i] <<endl;
}
names.pop_back();           // removes the last item from the vector
cout << endl;
return 0;*

******************************************************************************************/

// vector in a function

int sumVector (vector<int> vect){
    int total = 0;
    for (int i = 0; i < vect.size(); ++i){
        total += vect[i];
    }
    return total;
}

void display (vector<int> vect){
    for (int i = 0; i < vect.size(); ++i){
        cout << vect[i] << " " << endl;
    }
}

void curveGrades (vector<int> &vect, int amount){
    for (int i = 0; i < vect[i]; ++i){
        vect[i] += amount;
    }
}

int main(){
    vector<int> grades;
    int total;
    grades.push_back(100);
    grades.push_back(90);
    grades.push_back(80);
    grades.push_back(70);
    grades.push_back(60);

    total = sumVector(grades);
    cout << "The total is: " << total <<endl <<endl;

    display(grades);

    cout << endl << endl;

    curveGrades(grades, 10);
    cout << endl << endl;
    display(grades);
}
