#include <iostream>
using namespace std;

int split(string input_string, char separator, string arr[], const int ARR_SIZE){
    int j = 0, k = 0, z = 0, y = 0;
    int length = input_string.length();

    if (length == 0){
        return 0;
    }

    for (int i = 0; i < length; i++){
        cout << "i: " << i << endl;
        if (input_string[i] == separator){
            cout << ", found: " << i << endl;
            arr[j] = input_string.substr(k, z);
            cout << "the word: " << input_string.substr(k, z) << endl;
            j++;
            cout << "j: " << j << endl;
            k = i + 1;
            cout << "k: " << k << endl;
            z = -1;
        } else if (j == ARR_SIZE){
            y = 1;
            break;
        } else {
            arr[j] = input_string.substr(k, z + 1);
            cout << "the word: " << input_string.substr(k, z + 1) << endl;
        }
        z++;

    }

    if (j == 0){
        arr[0] = input_string;
        return 1;
    }else if (y == 0){
        return j + 1;
    }
    return -1;

}

void printArray(string arr[], const int NUM_ELEMENTS){
for (int i=0; i < NUM_ELEMENTS; i++){
cout << "arr["<< i << "]:" << arr[i] << endl;
}
}


int main(){
string testcase = "cityP,cityQ,cityR,cityS";
char separator = ',';
const int ARR_SIZE = 8;
string arr[ARR_SIZE];
// num_splits is the value returned by split
int num_splits = split(testcase, separator, arr, ARR_SIZE);
cout << "Function returned value: " << num_splits << endl;
// print array contents
printArray(arr, num_splits);
}