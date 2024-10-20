#include <iostream>

using namespace std;

bool validateInt(string input){

if (input.length() == 0) {
            return false;
}

    for (unsigned int i = 0; i < input.length(); i++){
        
        if ((input.at(0) == 45) && (input.length() > 1)) {
            continue;
        }
        else if (input.at(i) == 45) {
            return false;
        }


        if (((input.at(i) >= 48) && (input.at(i) <= 57))){

            continue;

        }
        else {
            return false;

        }
    }

    return true;
}

int main()
{
string number;
cout << "Enter the integer : " << endl;
getline(cin, number);

if(!validateInt(number)){
cout << "The entered string is not a valid integer!!" << endl;
}
else{
cout << "The entered string is a valid integer!!" << endl;
}
return 0;
}