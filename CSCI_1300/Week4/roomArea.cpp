#include <iostream>

using namespace std;

double calculateRoomArea(double length, double width){
    double x=(length*width);
    return x;
}

int main() {

    double length, width;

cout << "Enter the length of the room in ft:" << endl;
cin >> length;
cout << "Enter the width of the room in ft:" << endl;
cin >> width;
if ((length<=0)||(width<=0)){
    cout << "Length or width is invalid. Area cannot be calculated." << endl;
    return 0;
}

cout << "The area is: " << calculateRoomArea(length, width) << " sq ft." << endl;

}


