#include <iostream>
#include <algorithm>

using namespace std;

void reverseComplement(string strand){
    string reversed;
    string x;

    for (int i = strand.length(); i > -1; i--){
        reversed += strand.at(i);
    }

    for (unsigned int i = 0; i < reversed.length(); i++){
        if (reversed.at(i) == 'A'){
            reversed.at(i) = 'T';
        } else if (reversed.at(i) == 'T'){
            reversed.at(i) = 'A';
        } else if (reversed.at(i) == 'C'){
            reversed.at(i) = 'G';
        } else if (reversed.at(i) == 'G'){
            reversed.at(i) = 'C';
        }

        cout << reversed.at(i);
        
    }

}

int main() {
    string strand, newStrand;
    cin >> strand;

    reverseComplement(strand);

}