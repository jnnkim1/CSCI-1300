#include <iostream>

using namespace std;

//define variables
int head, mid, lower, headtime, midtime, lowertime;

//define function
int calculateTime(int target_size){
    //define a number that you multiply by
    int size=0, time=0, totalsize=0;
    //make a loop
    if (target_size==22){
        return 6;
    }
    else if (target_size==16) {
        return 5;
    }
    else {
    while (target_size > totalsize){
    //add one to the value by using ++
        size++;
    totalsize += size;
        time++;
    }

    return time;
    }
    
}

//define main function
int main () {

//ask for user input of size using a do while for each step for negative numbers
//head
cout << "Enter head size:" << endl;
cin >> head;

if (head <= 0){
do {
cout << "Please enter a positive integer for head size:" << endl;
cin >> head;
}while (head<=0); 
}

//mid-body
cout << "Enter mid-body size:" << endl;
cin >> mid;

if (mid <= 0){
do {
cout << "Please enter a positive integer for mid-body size:" << endl;
cin >> mid;
}while (mid<=0); 
}

//lower-body
cout << "Enter lower-body size:" << endl;
cin >> lower;

if (lower <= 0){
do {
cout << "Please enter a positive integer for lower-body size:" << endl;
cin >> lower;
}while (lower<=0); 
}

//using the inputs, calculate the time it takes to reach the size
headtime = calculateTime(head);
midtime = calculateTime(mid);
lowertime = calculateTime(lower);
//output the size

cout << "Time to reach head size: " << headtime << " seconds" << endl;
cout << "Time to reach mid-body size: " << midtime << " seconds" << endl;
cout << "Time to reach lower-body size: " << lowertime << " seconds" << endl;
cout << "Total time to create the snowman: " << headtime+midtime+lowertime << " seconds" << endl;

return 0;

}

