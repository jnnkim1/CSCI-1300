#include <iostream>

using namespace std;

int main() {
    //declare variables
    double temp1, temp2, temp3;
    //user input of three non-negative numbers (double)
    cout << "Enter temperatures over the last three days:" << endl;
    cin >> temp1 >> temp2 >> temp3;

    //validate temp numbers
    if ((temp1<0)||(temp2<0)||(temp3<0)) {
        cout << "Invalid temperature input." << endl;
        return 0;
    }

    //determine if increasing, decreasing, or neither
    //first two decrease
    if ((temp1==temp2)||(temp2==temp3)) {
        cout << "The temperature is changing unpredictably." << endl;
    }
        if (temp1>temp2) { 
        //last two decrease
            if (temp2>temp3) {
            cout << "It's getting cooler!" << endl;
            }
            else if (temp2<temp3) {
            cout << "The temperature is changing unpredictably." << endl;
            }
        }
    //first two increase
        else if (temp1<temp2) {
            //last two increase
            if (temp2<temp3) {
                cout << "It's getting warmer!" << endl;
            }
            else if (temp2>temp3) {
                cout << "The temperature is changing unpredictably." << endl;
            }
        }

    return 0;
}