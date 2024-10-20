#include <iostream>
using namespace std;

int countDecimals;
// Declare validateDouble function
bool validateDouble(string input){
if (input.length() == 0){
    return false;
}

for (unsigned int i =0; i < input.length(); i++){


if (isdigit(input.at(i))){
    continue;

} 
else if (input.at(i) == '.'){
        countDecimals++;
        if (countDecimals > 1){
        return false;
        break;
        }else{
            continue;
        }

    
} else if (input.at(i) == '-'){
    if (!isdigit(input.at(0)) && input.at(0) != '-'){
        return false;
        break;
    }else if (input.at(i) > 1){
        return false;
        break;
    }
    continue;
}


else {
return false;
break;
}

return true;
}

return true;
}


















// Declare main function
int main(){
// Ask for user input
string number;

cout << "Enter the double : " << endl;
// Getline and put into variable
getline(cin, number);

// Call function
// Output the correct thing based on whether bool is true or false
if(!validateDouble(number)){
cout << "The entered string is not a valid double!!" << endl;
}
else{
cout << "The entered string is a valid double!!" << endl;
}
return 0;
}


