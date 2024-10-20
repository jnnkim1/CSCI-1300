#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main() {

    //declare variables
    char size;
    int toppings;

    //collect input from user about size and toppings
    cout << "What size pizza would you like to order?" << endl;
    cin >> size;
    size = toupper(size);

    cout << "How many toppings do you want?" << endl;
    cin >> toppings;

    //invalidate number of toppings if less than 0
    if ((!(size == 'S') && !(size == 'M') && !(size == 'L')) && (toppings<0)) {
        cout << "Invalid pizza size and number of toppings." << endl;
    }

    else if (!(size == 'S') && !(size == 'M') && !(size == 'L')) {
        cout << "Invalid pizza size." << endl;
        return 0;
    }

    else if (toppings<0) {
        cout << "Invalid number of toppings." << endl;
        return 0;
    }

    //calculate base price and add price of toppings
    //if small pizza
    if (size == 'S') {
        cout << "Your total is $" << fixed << setprecision (2) << (toppings*0.99)+(8.00) << endl;
    }

    //if medium pizza
    else if (size == 'M') {
        cout << "Your total is $" << fixed << setprecision (2) << (toppings*1.99)+(10.00) << endl;
    }

    //if large pizza
    else if (size == 'L') {
        cout << "Your total is $" << fixed << setprecision (2) << (toppings*2.99)+(14.00) << endl;
    }
    
    //invalidate pizza size if anything other than s, m, l

    return 0;
}