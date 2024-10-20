#include <iostream>

using namespace std;

//declare function
double calculateSowingTime (double area, char machine_type){

    if (machine_type=='W'){
        return ((area/8.0)*12);
    }
    else if (machine_type=='X'){
        return ((area/3.0)*10);
    }
    else if (machine_type=='Y'){
        return ((area/2.0)*7);
    }
    else if (machine_type=='Z'){
        return ((area/7.0)*8);
    }

    return 0;
}

//declare main funct
int main() {
double area;
char machine_type;

//ask user area of farm and sowing machine
cout << "Enter area of the farmland in sq ft:" << endl;
cin >> area;
cout << "Enter the type of sowing machine to be used:" << endl;
cin >> machine_type;

if (area<=0){
        cout << "Area or machine type is invalid. Time cannot be calculated." << endl;
            return 0;
    }
if (!(machine_type=='W')&& !(machine_type=='X')&& !(machine_type=='Y')&& !(machine_type=='Z')) {
        cout << "Area or machine type is invalid. Time cannot be calculated." << endl;
        return 0;
    }

//call function

cout << "The time taken is: " << calculateSowingTime (area, machine_type) << " minutes." << endl;

}