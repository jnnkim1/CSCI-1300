#include <iostream>
using namespace std;

int maxProfit(int prices[], const int NUM_MONTHS){
    int profit = 0, currentProfit = 0;
    for (int i = 0; i < NUM_MONTHS; i++){
        for (int j = i + 1; j < NUM_MONTHS; j++){
            if (prices[i] < prices[j]){
                currentProfit = prices[j] - prices[i];
            } else if (prices[i] > prices[j]){
                continue;
            }
            if (currentProfit > profit){
                profit = currentProfit;
            }
        }
    }
    return profit;
}

int main(){
const int NUM_MONTHS = 6;
int prices[NUM_MONTHS] = {700000, 300000, 400000, 100000, 400000, 100000};
int profit = maxProfit(prices, NUM_MONTHS);
cout << "Maximum profit: " << profit << endl;
return 0;
}