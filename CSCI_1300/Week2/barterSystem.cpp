#include <iostream>

using namespace std;

int main(){

    //declare variables
    int potatoes, watermelons, avocados, chickens, remainingPotatoes, remainingWatermelons, remainingAvocados;

    //get user input about number of potatoes
    cout << "Enter the number of potatoes:" << endl;
    cin >> potatoes;

    //convert potatoes to watermelons
    watermelons = potatoes/4;
    remainingPotatoes = potatoes%4;

    //convert watermelons to avocados
    avocados = watermelons/2;
    remainingWatermelons =watermelons%2;

    //convert avocados to chickens
    chickens = avocados/6;
    remainingAvocados =avocados%6;

    //output to user about how many of each item can be bought
    cout << "Maximum number of chicken(s) " << chickens << ", avocado(s) " << remainingAvocados << ", watermelon(s) " << remainingWatermelons << ", potato(es) " << remainingPotatoes << endl;

    return 0;

}