#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    //declare variables
    int hours;

    //ask user input of how many hours passed
    cout << "How many hours have passed?" << endl;
    cin >> hours;

    //output total amount of water one decimal place
    cout << "The indoor pool has " << setprecision (3) << 19+(0.6*hours)-(0.4*hours) << " inches of water, and the outdoor pool has " << 22+(0.3*hours)-(0.1*hours) << " inches of water." << endl;

    return 0;
}