#include <iostream>

using namespace std;

int main() {

    //declare variables
    int budget, miles, nights, remainingBudget, perNight;

    //ask user for budget and miles and nights
    cout << "What is your budget?" << endl;
    cin >> budget;

    cout << "How many miles will you drive?" << endl;
    cin >> miles;

    cout << "How many nights do you want to spend there?" << endl;
    cin >> nights;

    //invalidate any numbers that are negative
    if ((budget<0)||(miles<0)||(nights<0)) {
        cout << "Invalid input(s)." << endl;
        return 0;
    }

    //calculate the remaining money after gas
    remainingBudget = budget-(0.16*miles);

    //determine budget for each night
    perNight = (remainingBudget/nights);

    //if statement for which hotel
    if (perNight>=100) {
        cout << "You can afford to stay in a nice hotel on this trip." << endl;
    }
    else if (perNight>=50) {
        cout << "You can afford to stay in a cheap motel on this trip." << endl;
    }
    else if (perNight>=20) {
        cout << "You can afford to go camping on this trip." << endl;
    }
    else if (perNight<20) {
        cout << "This trip is outside your budget." << endl;
    }
    return 0;
}