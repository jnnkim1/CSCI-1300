#include <iostream>
#include <cassert>
using namespace std;

void printStringArray(string input[], int size){
    for(int i = 0; i < size; i++){
        cout << input[i] << endl;
    }
}

int main(){
    string input[] = {"hi", "hello"};
    printStringArray(input, 2);
    return 0;
}