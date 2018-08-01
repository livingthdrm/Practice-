#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

void buildVector (vector<int> &vect, int numItems){
    srand(time(NULL));
    for (int i = 1; i <= numItems; ++i){
        vect.push_back(rand() % 1000 + 1);
    }
}

void displayVector(vector<int> vect){
    for (int i = 0; i <= vect.size(); ++i ){
        cout << vect[i] <<endl;
    }
}

void displayVectorS(vector<string> vect){
    for(int i = 0; i <= vect.size(); ++i){
        cout <<vect[i] <<endl;
    }
}

int main(){
    /*vector<int> numbers;
    buildVector(numbers, 20);
    displayVector(numbers);
    cout <<endl <<endl;
    sort(numbers.begin(), numbers.end());
    displayVector(numbers);*/

    vector<string> names;
    /*names.push_back("Penninah");
    names.push_back("Shiko");
    names.push_back("Cecilia");
    names.push_back("Sly");
    names.push_back("Wangechi");
    names.push_back("Michelle");
    names.push_back("Achista");
    names.push_back("Rose");
    names.push_back("Gift");
    names.push_back("Joy");
    names.push_back("Nyambu");
    names.push_back("Immaculate");*/
    string name;
    for(int i = 0; i <= 20; ++i){
        cout << "Enter a name: ";
        cin >> name;
        names.push_back(name);
    }
    displayVectorS(names);
    sort(names.begin(), names.end());
    cout <<endl << endl;
    displayVectorS(names);

    return 0;
}
