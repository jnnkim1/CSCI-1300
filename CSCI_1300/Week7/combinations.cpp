#include <iostream>

using namespace std;

int main(){

//Declare two arrays, set1 with length of 5, set2 with length of 2
int set1[5];
int set2[2];

//prompt user for 5 integers and input in 1st set
cout << "Please enter 5 integers for the first set:" << endl;
for (int i = 0; i < 5; i++){
    cin >> set1[i];
}

//prompt user for 2 integers and input in 2nd set
cout << "Please enter 2 integers for the second set:" << endl;
for (int i = 0; i < 2; i++){
    cin >> set2[i];
}

//create a nested for loop to output pairs
for (int i = 0; i < 5; i++){
    for (int j = 0; j < 2; j++){
        cout << set1[i] << "-" << set2[j] << " ";
    }

    cout << endl;
}

}