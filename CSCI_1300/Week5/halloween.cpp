#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES
#include <cmath>
#define M_PI 3.14159265358979323846
#include <cassert>

using namespace std;

//define variables
//write functions
double calculateVolumeOfPumpkinCandy(double radiusX, double radiusY, double radiusZ) { 
    int vol = radiusX*radiusY*radiusZ;
    return (4*M_PI*vol)/3;
 }
double calculateVolumeOfWitchHatCandy(double radius, double height) { 
    int vol2 = pow(radius, 2)*height;
    return (M_PI*vol2)/3;
}

//write main function
int main () {

double volumeOfPumpkinCandy;
double volumeOfWitchHatCandy;

volumeOfPumpkinCandy = calculateVolumeOfPumpkinCandy(2, 2, 2);
volumeOfWitchHatCandy = calculateVolumeOfWitchHatCandy(2, 2);
assert(calculateVolumeOfPumpkinCandy(2, 2, 2) > 0);
assert(calculateVolumeOfWitchHatCandy(2, 2) > 0);

    cout << volumeOfPumpkinCandy << endl;
    cout << volumeOfWitchHatCandy << endl;
    

volumeOfPumpkinCandy = calculateVolumeOfPumpkinCandy(1, 5, 4);
volumeOfWitchHatCandy = calculateVolumeOfWitchHatCandy(6, 3);
assert(calculateVolumeOfPumpkinCandy(1, 5, 4) > 0);
assert(calculateVolumeOfWitchHatCandy(6, 3) > 0);

    cout << volumeOfPumpkinCandy << endl;
    cout << volumeOfWitchHatCandy << endl;


    
}
