#include <iostream>

using namespace std;

int encryptedLetter;
//define the function
char encryptLower (char letter, int shift_value){
//encrypt a single letter by moving ASCII number
int letterASC = (int)letter;

if (shift_value > 26) {
    shift_value %= 26;
}
else if (shift_value < -26) {
    shift_value %= -26;
}

encryptedLetter = letterASC+shift_value;

if (encryptedLetter > 122){
    // encryptedLetter= encryptedLetter-122;
    encryptedLetter = 96+shift_value;
}
else if (encryptedLetter < 97){
    encryptedLetter= 97-encryptedLetter;
    encryptedLetter = 123-encryptedLetter;
}
//return the encrypted letter
return encryptedLetter;
}

//define main
int main(){
//define variables
char letterInput;
int shiftInput;

//ask user input for letter and shift
cout << "Enter the lowercase character to encrypt:" << endl;
cin >> letterInput;
cout << "Enter the encryption value:" << endl;
cin >> shiftInput;


if (letterInput < 97) {
    cout << "Letter " << letterInput << " was encrypted to " << letterInput << endl;
    return 0;
}

//call the function
cout << "Letter " << letterInput << " was encrypted to " << encryptLower (letterInput, shiftInput) << endl;

return 0;
}