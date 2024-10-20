#include<iostream>

using namespace std;

int main(){
    int total_change, remaining_cents, quarters, dimes, nickles, pennies;

    cout << "How much money do you want change for?" << endl;
    cin >> total_change;

    quarters = total_change/25;
    remaining_cents = total_change%25;

    dimes = total_change/10;
    remaining_cents %=10;

    nickles = total_change/5;
    pennies %=5;

    cout << "Your change is: " << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickles: " << nickles << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
    
}