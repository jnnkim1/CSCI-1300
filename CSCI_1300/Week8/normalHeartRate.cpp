#include <iostream>
using namespace std;

void printNormalHeartRates(string patients[], int heart_rate[], const int NUM_PATIENTS){
    for (int i = 0; i < NUM_PATIENTS; i++){
        if (heart_rate[i] >= 70 && heart_rate[i] <= 190){
            cout << patients[i] << " " << heart_rate[i] << endl;
        }
    }
}

int main()
{
string patients[6] = {"Chloe Kim", "Rene Rinnekangas", "Shaun White", "A", "B", "C"};
int heart_rate[6] = {190, 70, 191, 69, 71, 189};
printNormalHeartRates(patients, heart_rate, 6);
return 0;
}