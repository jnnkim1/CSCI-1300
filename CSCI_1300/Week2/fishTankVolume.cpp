#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //define variables length, width, height, and volume
    int length, width, height, volume;

    //ask user for the three values in inches
    cout << "What is the length of the fish tank in inches?" << endl;
    cin >> length;

    cout << "What is the width of the fish tank in inches?" << endl;
    cin >> width;

    cout << "What is the height of the fish tank in inches?" << endl;
    cin >> height;

    //calculate volume of fish tank in inches
    volume = length*width*height;


    //print how many gallons fit in fish tank to one decimal place
    cout << "This fish tank has a " << fixed << setprecision(1) << volume*0.004329 << " gallon capacity." << endl;

    return 0;
}