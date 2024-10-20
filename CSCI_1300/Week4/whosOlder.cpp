#include <iostream>

using namespace std;

int WhoIsOlder(int month1, int day1, int year1, int month2, int day2, int year2);
bool validate(string input);

int main () {
    int result = WhoIsOlder(1, 1, 1990, 1, 1, 2000);
    if (result==1) {
        cout << "person 1 is older" << endl;
    }
    else if (result==2) {
        cout << "person 2 is older" << endl;
    }
    else if (result==0) {
        cout << "person 1 and person 2 are the same age" << endl;
    }


    return 0;
}


int WhoIsOlder(int month1, int day1, int year1, int month2, int day2, int year2){

if (year1>year2) {
    return 2;
}
else if (year1<year2) {
    return 1;
}
else{
    if (month1>month2){
        return 2;
    }
    else if (month1 < month2){
        return 1;

    }
    else{
        if (day1>day2){
            return 2;
    }
        else if (day1 < day2){
            return 1;
        }
        else {
            return 0;
        }
    
    }

}

}


bool validate(string input){


}