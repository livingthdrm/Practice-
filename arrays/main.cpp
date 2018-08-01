#include <iostream>

using namespace std;

/*int main(){

    int numbers[10];                    //declaring an array
    for (int i = 0; i < 10; ++i){       //[this]
        numbers[i] = i + 1;
    }
    for (int i = 0;  i < 10; ++i){
        cout << i << ": " << numbers[i] <<endl;
    }

    int numbers[] = {1,2,3,4,5,6,7,8,9,10};         //method 2; use [this] to display.

    int numbers[10] = {1,2,3,4,5};                  // this will show : 1,2,3,4,5,0,0,0,0,0
    return 0;
}*/

int main(){
    /*const int size = 10;
    int numbers[size];
    numbers[0] = 1;
    numbers[1] = 2;
    for (int i = 2; i < 10; ++i){
        numbers[i] = i + 1;
    }
    int total = 0;
    for (int i = 0; i < size; ++i){
        total += numbers[i];
        //cout << total <<endl;
    }
    cout << total <<endl;

    ************************************************************************************************
    const int size = 5;
    int grades[] = {56, 67, 89,76, 65};
    double average = 0;
    for (int i = 0; i < size; ++i){
            average += grades[i] / size;
    }
    cout << average <<endl;

    *************************************************************************************************/

    const int size = 3;
    char word[size] = {'b', 'o', 'b'};
    string rword;
    for (int i = size -1; i >= 0; --i){
        rword += word[i];
    }
    cout <<rword <<endl;

    return 0;
}
