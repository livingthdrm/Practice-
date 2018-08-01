#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>

using namespace std;

/*void displayVector (vector<int> vect ){
    for(int i = 0; i < vect.size(); ++i){
        cout << vect[i] <<endl;
    }
}

int main(){
    vector<int> numbers;
    int number;
    srand(time(NULL));
    for (int i = 1; i <= 10000; ++i ){
        number = rand() % 10000 + 1;
        numbers.push_back(number);
    }

    displayVector(numbers);
    return 0;
}*/
void buildVector (vector<int> &vect){
    srand(time(NULL));
    for (int i = 1; i <= 100; ++i){
        vect.push_back(rand() % 1000 + 1);
    }
}

int searchVector (vector<int> vect, int value){
    /*for (int i = 0; i <= vect.size(); ++i){
        if (vect[i] == value)
            return i;
    return -1;
    }*/
    int found = -1;
    found = vect.at(value);
    return found;
}

/*void displayVector (vector<int> vect ){
    for(int i = 0; i < vect.size(); ++i){
        cout << vect[i] <<endl;
    }
}*/

int main(){
    vector <int> numbers;
    buildVector(numbers);
    int found, item;
    cout << "Enter the item: ";
    cin >> item;

    //displayVector(numbers);

    //found = searchVector(numbers, item);
    found = numbers.at(item);   //most efficient way to search
    if (found > -1){
        cout << "Found the item at position: " << found <<endl;
    }
    else {
        cout << "The item could not be found: " <<endl;
    }


    return 0;
}
