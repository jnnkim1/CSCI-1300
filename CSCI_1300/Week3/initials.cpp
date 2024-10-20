#include <iostream>

using namespace std;

int main() {
    //declare variables
    string name1, name2, name3, name4;

    //ask user for their name(s)
    cout << "Please enter your first, middle, second middle, and last name. If you are missing any names use N/A at the end." << endl;
    cin >> name1 >> name2 >> name3 >> name4;

    
    if (name3 == "N/A"){ //if they have 2 names...
        cout << name1.at(0) << ". " << name2 << endl;
    }
    else if (name4 == "N/A"){ //if they have 3 names...
        cout << name1.at(0) << ". " << name2.at(0) << ". " << name3 << endl;
    }  
    else{ //if they have 4 names...
        cout << name1.at(0) << ". " << name2.at(0) << ". " << name3.at(0) << ". " << name4 << endl;
    }

    return 0;
}