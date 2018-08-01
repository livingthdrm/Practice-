#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x, y, result1, result2, result3, result4, result5 ;
    x = 3;
    y = 4;
    result1 = abs(x + y);
    cout << result1 <<endl;

    result2 = abs(x) + abs(y);
    cout << result2 << endl;


    result3 = pow(x, 3)/ x + y;
    cout << result3 << endl;

    result4 = sqrt(pow(x, 6) + pow(y, 5));
    cout << result4 << endl;

    result5 = pow((x + sqrt(y)), 7);
    cout << result5 << endl;
    return 0;
}
