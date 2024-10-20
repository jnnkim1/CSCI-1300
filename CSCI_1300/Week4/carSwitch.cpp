#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {

//define char var and switch
char letter;
//user input for letter and store in char
cout << "Enter the first letter of the company:" << endl;
cin >> letter;

//start switch statement
switch (letter) {
    //case if letter B
    case 'B':
    cout << "Automobile manufacturer chosen: BMW" << endl;
    break;

    //case if letter V
    case 'V':
    cout << "Automobile manufacturer chosen: Volkswagen" << endl;
    break;

    //case if letter H
    case 'H':
    cout << "Automobile manufacturer chosen: Honda" << endl;
    break;

    //case if letter T
    case 'T':
    cout << "Automobile manufacturer chosen: Tesla" << endl;
    break;

    //case if invalid letter
    default:
    cout << "Automobile manufacturer chosen: Invalid" << endl;
    break;
}


    return 0;
}