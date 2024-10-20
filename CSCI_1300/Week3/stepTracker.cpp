#include <iostream>

using namespace std;

int main () {
    int steps, remainingSteps;

    cout << "How many steps have you taken today?" << endl;
    cin >> steps;

    remainingSteps = 10000-steps;

    if (steps<=5000) {
    cout << "You have not walked much today! Get those steps in! You have " << remainingSteps << " steps left to walk." << endl;
    }
    else if (steps>5000 && steps<10000) {
    cout << "You're doing great, over half way there! You still have " << remainingSteps << " steps left to walk." << endl;
    }
    else if (steps >= 10000) {
    cout << "You've hit your goal for the day! Great job getting exercise!" << endl;
    }
return 0;
}