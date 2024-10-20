#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //declare variables
    int height;

    //user input of how far the object fell in meters
    cout << "How far did the object fall in meters?" << endl;
    cin >> height;

    //output of the time the object took to fall
    cout << "The object fell for " << fixed << setprecision(2) << sqrt((2*height)/9.8) << " seconds." << endl;
    return 0;

}