#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //declare variables
    char car;
    int days, base, priceday;

    //user input of which car and amount of rental days
    cout << "Which car type (A, B, C, or D) would you like to rent?" << endl;
    cin >> car;

    cout << "How many days would you like to rent this car?" << endl;
    cin >> days;

    //validate car type and number of days
    if (((!(car=='A'))&&(!(car=='B'))&&(!(car=='C'))&&(!(car=='D')))||(days<1)) {
        cout << "Please enter valid input." << endl;
        return 0;
    }

    //if statement of base price for each car
    if (car == 'A') {
        base = 80;
    }
    else if (car == 'B') {
        base = 110;
    }
    else if (car == 'C') {
        base = 160;
    }
    else if (car == 'D') {
        base = 220;
    }
    //if statement of price per day for each car
    if (car == 'A') {
        priceday = 15;
    }
    else if (car == 'B') {
        priceday = 25;
    }
    else if (car == 'C') {
        priceday = 35;
    }
    else if (car == 'D') {
        priceday = 45;
    }

    //output of total

    cout << "Your total is $" << fixed << setprecision(2) << (1.23*(base + (days*priceday))) << endl;

    return 0;
}