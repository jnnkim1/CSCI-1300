#include <iostream>

using namespace std;

int main() {

    //declare variables
    int year;
    bool D4, D100, D400;

    //ask for user input
    cout << "Which year" << endl;
    cin >> year;

    D4 = (year%4 ==0);
    D100 = (year%100 ==0);
    D400 = (year%400 ==0);

    //boolean

    // if divisible by 4 and (not divisible by 100 and not divisible by 400)
    if (D4 && !(D100 && !D400)) {
        cout << "The year is a leap year." << endl;

    } else {
        cout << "The year is NOT a leap year." << endl;
      
    }
    
    return 0;
}