#include <iostream>
using namespace std;

int minAverg(int scores[][10], const int NUM_STUDENTS, double threshold){
    double total, avg;
    for (int i = 0; i < NUM_STUDENTS; i++){
        for (int j = 0; j < 10; j++){
        total += scores[i][j];
        }

        avg = total / 10;

        if (avg < threshold){
            return i;
        }else{
            total = 0;
            continue;
        }
    }

    return -1;

}

int main(){
int scores[3][10] = {
{10, 1, 1, 1, 1, 1, 1, 1, 1, 1},
{2, 2, 2, 2, 2, 2, 2, 2, 2, 20},
{3, 3, 3, 3, 3, 30, 3, 3, 3, 3}
};
cout << "returned student index: " << minAverg(scores, 2, 25);

return 0;
}
