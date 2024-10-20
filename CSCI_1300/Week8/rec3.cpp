#include <iostream>
#include <cassert>
using namespace std;

void elementWiseSum(int a[][3], int b[][3], int row, int col){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
        a[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main(){
const int N=2;
const int M=3;
int matrix1[N][M];
int matrix2[N][M];

cout << "Enter values for matrix 1, one row at a time:" << endl;
for(int i = 0; i < 2; i++){
    for (int j = 0; j < 3; j++){
    cin >> matrix1[i][j];
    }
}

cout << "Enter values for matrix 2, one row at a time:" << endl;
for(int i = 0; i < 2; i++){
    for (int j = 0; j < 3; j++){
    cin >> matrix2[i][j];
    }
}

// Call the elementWiseSum function with the two matrices
elementWiseSum(matrix1, matrix2, N, M);

// Display the result matrix
cout << "The sum is: "<< endl;
for (int i = 0; i < 2; i++){
    for (int j = 0; j < 3; j++){
    cout << matrix1[i][j] << " ";
    }
cout << '\n';
}

return 0;
}