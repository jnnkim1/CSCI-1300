#include <iostream>

using namespace std;

int main() {

//declare variables
int category, instrument;
//user input for category
cout << "Select a category: (1)Brass (2)Woodwind (3)Percussion" << endl;
cin >> category;

//switch statement for which category chosen
switch (category) {
    //if choose brass
    case 1:
    cout << "Select an instrument: (1)Trumpet (2)Trombone" << endl;
    cin >> instrument;
        switch (instrument) {
            //if choose trumpet
            case 1:
            cout << "Your instrument will be $570." << endl;
            break;

            //if choose trombone
            case 2:
            cout << "Your instrument will be $500." << endl;
            break;

            //if choose invalid output
            default:
            cout << "Please enter a valid input." << endl;
            break;
            return 0;
        }
    break;

    //if choose woodwind
    case 2:
    cout << "Select an instrument: (1)Flute (2)Saxophone" << endl;
    cin >> instrument;
        switch (instrument) {
            //if choose flute
            case 1:
            cout << "Your instrument will be $425." << endl;
            break;

            //if choose saxophone
            case 2:
            cout << "Your instrument will be $225." << endl;
            break;

            //if choose invalid output
            default:
            cout << "Please enter a valid input." << endl;
            break;
            return 0;
        }
    break;

    //if choose percussion
    case 3:
    cout << "Select an instrument: (1)Snare Drum (2)Cymbals" << endl;
    cin >> instrument;
        switch (instrument) {
            //if choose snare drum
            case 1:
            cout << "Your instrument will be $275." << endl;
            break;

            //if choose cymbals
            case 2:
            cout << "Your instrument will be $350." << endl;
            break;

            //if choose invalid output
            default:
            cout << "Please enter a valid input." << endl;
            break;
            return 0;
        }
    
    break;

    //if choose invalid input
    default:
    cout << "Please enter a valid input." << endl;
    break;
    return 0;

}


    return 0;
}