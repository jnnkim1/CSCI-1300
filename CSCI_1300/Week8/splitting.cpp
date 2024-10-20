#include <iostream>

using namespace std;

int split(string input_string, char separator, string arr[], const int ARR_SIZE){
    string word;
    int j = 0, k = 0;

    if (input_string.length() == 0){
        return 0;
    }

    for (unsigned int i = 0; i < input_string.length(); i++){
        if (input_string[i] == separator){
            arr[j] = word;
            word = "";
            j++;
            continue;
        }else if (j == ARR_SIZE){
            k++;
            break;
        }else {
            word += input_string[i];
        }
    }

    arr[j] = word;

    if (j == 0){
        return 1;
    }else if (k == 0){
        return ARR_SIZE;
    }
    return -1;
}

void printArray(string arr[], const int NUM_ELEMENTS){
for (int i=0; i < NUM_ELEMENTS; i++){
cout << "arr["<< i << "]:" << arr[i] << endl;
}
}


int main(){
string testcase = "Bangkok,Berlin,Birmingham,Bogota,Busan,Baton Rouge,Beaumont,Boise,Budapest";
char separator = ',';
const int ARR_SIZE = 5;
string arr[ARR_SIZE];
// num_splits is the value returned by split
int num_splits = split(testcase, separator, arr, ARR_SIZE);
cout << "Function returned value: " << num_splits << endl;
// print array contents
printArray(arr, ARR_SIZE);

}

