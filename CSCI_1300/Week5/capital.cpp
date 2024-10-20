#include <iostream>

using namespace std;

int main() {

    string input;
    int counter=0;

    cout << "Enter a string" << endl;
    cin >> input;

    for (int i = 0; i < input.length(); i++){
        
        if (input.at(i)<97) {
            counter++;
            i++;
        }else {
            i++;
        }

    }

    cout << counter << endl;


}