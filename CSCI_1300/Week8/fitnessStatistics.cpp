#include <iostream>
#include <iomanip>
using namespace std;

void stepCountCumulativeSum(int daily_steps[], const int NUM_DAYS, int cumulative_steps[]){
    int total = 0;
    for(int i = 0; i < NUM_DAYS; i++){
        total += daily_steps[i];
        cumulative_steps[i] = total;
    }
}

double stepCountDeviation(int daily_steps[], const int NUM_DAYS, const int OPTIMAL_STEP_COUNT){
    double total = 0;
    double mean;
    double deviation;
    for(int i = 0; i < NUM_DAYS; i++){
        total += daily_steps[i];
    }

    mean = total / NUM_DAYS;
    return deviation = mean - OPTIMAL_STEP_COUNT;

}




int main()
{
const int NUM_DAYS = 4;
int daily_steps[NUM_DAYS] = {4000, 2000, 8000, 3000};
const int OPTIMAL_STEP_COUNT = 750;
double deviation =
stepCountDeviation(daily_steps, NUM_DAYS, OPTIMAL_STEP_COUNT);
// We are printing the deviation up to 3 decimal
cout << fixed << setprecision(3) << deviation << endl;
return 0;
}
