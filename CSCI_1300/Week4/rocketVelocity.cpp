#include <iostream>

using namespace std;

int main () {

    //Declare variables
    int initialVelocity, acceleration;
    char fuelType;

    //Ask user for initial velocity and fuel type
    cout << "Enter the initial velocity:" << endl;
    cin >> initialVelocity;
    cout << "Enter the fuel type:" << endl;
    cin >> fuelType;

    //invalidate any invalid inputs
    if ((initialVelocity < 0)||(!(fuelType=='A')&&!(fuelType=='B')&&!(fuelType=='C'))) {
        cout << "Invalid input." << endl;
        return 0;
    }

    //if statement for value of velocity
    //if velocity < 10
    if (initialVelocity<10) {
        //if fuel type A
        if (fuelType=='A') {
            acceleration=5;
        }
        //if fuel type B
        if (fuelType=='B') {
            acceleration=10;
        }
        //if fuel type C
        if (fuelType=='C') {
            acceleration=20;
        }
    }

    //if velocity >= 10 and velocity <= 40
    else if ((initialVelocity >=10) && (initialVelocity <= 40)) {
        //if fuel type A
        if (fuelType=='A') {
            acceleration=6;
        }
        //if fuel type B
        if (fuelType=='B') {
            acceleration=12;
        }
        //if fuel type C
        if (fuelType=='C') {
            acceleration=24;
        }
    }

    //if velocity > 40
    else if (initialVelocity > 40) {
        //if fuel type A
        if (fuelType=='A') {
            acceleration=3;
        }
        //if fuel type B
        if (fuelType=='B') {
            acceleration=6;
        }
        //if fuel type C
        if (fuelType=='C') {
            acceleration=9;
        }
    }


    //Calculate final velocity and output

    cout << "The final velocity is " << (initialVelocity+(20*acceleration)) << " m/s." << endl;

    return 0;

}