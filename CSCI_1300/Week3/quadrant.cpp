#include <iostream>

using namespace std;

int main() {

    //declare variables
    double xValue, yValue;

    //get input of the x and y value from the user
    cout << "What is the coordinates X and Y?" << endl;
    cin >> xValue >> yValue;

    cout << xValue << yValue << endl;

    //if x is positive
    if (xValue > 0) {

        if (yValue > 0) {
         cout << "The point is in Quadrant 1" << endl;
        }
        else if (yValue < 0) {
            cout << "The point is in Quadrant 4" << endl;
        }
        else {
            cout << "The point is on a line and therefore not in a Quadrant" << endl;
        }
    }
        
    //if x is negative
    else if (xValue < 0) {

        if (yValue > 0) {
         cout << "The point is in Quadrant 2" << endl;
        }
        else if (yValue < 0) {
            cout << "The point is in Quadrant 3" << endl;
        }
        else {
            cout << "The point is on a line and therefore not in a Quadrant" << endl;
        }
    }
    
    //if x is 0
    else if (xValue == 0) {
            cout << "The point is on a line and therefore not in a Quadrant" << endl;
        }

    //if x is any other number
    else {
        cout << "Number is invalid or not in a quadrant" << endl;
        }

    return 0;
}