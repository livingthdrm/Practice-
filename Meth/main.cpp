#include <iostream>
#include <cmath>
using namespace std;

int main(){
    /*int grade1, grade2, grade3, average;
    const int gradeAvr = 3;
    grade1 = 75;
    grade2 = 89;
    grade3 = 87;
    average = (grade1 + grade2 + grade3) / gradeAvr;
    cout << average;*/

    const double pi = 3.14159265;
    double circumference;
    int radius = 3;
    circumference = 2 * pi * radius;
    cout << "Circumference of a circle is: " << circumference;
    cout <<endl <<endl;
    double area;
    area = pi * pow(radius, 2);
    cout << "Area of a circle is: " << area;
    cout <<endl <<endl;
    double volume;
    volume = (4/3) * pi * pow(radius, 3);
    cout << "Volume of a sphere is: " << volume << endl;
    cout << sqrt(144) <<endl;
    cout << abs(1345) << " " << abs(-1345) << endl;
    cout << fmod(354.567, 3) << endl;

    /*int number = 2;
    double rate = 1.035//explicit conversion - type cast

    number = rate //implicit conversion
    rate = (int)rate //explicit conversion - type cast

    // explicit conversion is recommended.*/
    return 0;
}
