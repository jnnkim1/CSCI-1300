#include <iostream>

using namespace std;

void mostPopularWord(string words[], const int WORDS_SIZE){
int counter = 0;
int occurance = 0;
string popularWord;
    for(int i = 0; i < WORDS_SIZE; i++){
        string checkString = words[i];
        for(int j = 0; j < WORDS_SIZE; j++){
            if(checkString == words[j]){
                counter++;
            }
            if(counter > 0){
                if (counter >= occurance){
                popularWord = words[i];
                occurance = counter;
                }
            }
        }
        counter = 0;
    }
    
    cout << "The most popular word: " << popularWord << endl;
    cout << "Frequency: " << occurance << endl;
    cout << "Found at pos: ";
    for(int k = 0; k < WORDS_SIZE; k++){
        if(words[k] == popularWord){
        cout << k << " ";
        }
    }
}

int main(){
const int WORDS_SIZE = 9;
string words[WORDS_SIZE] = {"snow", "fall", "spring", "summer", "winter", "winter", "winter", "winter", "winter"};
mostPopularWord(words, WORDS_SIZE);
return 0;
}
