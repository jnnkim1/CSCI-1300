#include <iostream>

using namespace std;

//define main
int main () {
//define variables
int startN;

//ask for user input
cout << "Enter a number between 10 and 500:" << endl;
cin >> startN;

//make sure input is within range with do while
if ((startN <= 10) || (startN >= 500)) {
    do {
        cout << "Invalid input." << endl;
        cout << "Enter a number between 10 and 500:" << endl;
        cin >> startN;

    } while ((startN <= 10) || (startN >= 500));
}
int counter = 0;
// //make while loop that determines if number is even or odd
while (startN > 1) {
    if (startN % 2 == 0) {
        counter++;
        if (startN == 2){
            startN = startN / 2;
            cout << startN << endl;
            cout << "Total steps: " << counter << endl;
            break;
        }
        startN = startN / 2;
        cout << startN << endl;
    }
    else if (startN % 2 == 1) {
        counter++;
        startN = 3 * startN + 1;
        cout << startN << endl;
    }
    else{
        break;
    }

}

// //depending on which, perform a function while number is != 1
// //output the number of steps

return 0;
}