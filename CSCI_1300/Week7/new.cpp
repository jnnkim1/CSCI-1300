#include <iostream>

using namespace std;

#include <iostream>
#include <iomanip>

using namespace std;

//Boolean function to check whether a base is valid (A, T, G, C)
bool isValidBase(char base){
    if (base == 'A' || base == 'C' || base == 'G' || base == 'T'){
        return true;
    }else {
        return false;
    }
}

//Boolean function to check whether a strand input is valid (contains only A, T, C, G)
bool isValidStrand(string strand){
    if (strand.length() == 0){
        return 0;
    }
    for (unsigned int i = 0; i < strand.length(); i++){
        if (strand[i] == 'A' || strand[i] == 'C' || strand[i] == 'G' || strand[i] == 'T'){
            continue;
        } else {
            return 0;
            break;
        }
    }
return 1;
}

//Function to calculate similarity score between two strands
double strandSimilarity(string strand1, string strand2){

double similarityCounter = 0;
double total;
double similarityScore;

    //checks whether the length of the strings are the same length
    if (strand1.length() != strand2.length()){
        return 0;
    }

    //if the corresponding letter is the same as the other strand, add to the counter
    for (unsigned int i = 0; i < strand1.length(); i++){
        if (strand1[i] == strand2[i]){
            similarityCounter++;
        } else {
            continue;
        }
    }

    //calculate similarity score by dividing amount of similar letters by the total amount of letters
    total = strand1.length();
    similarityScore = similarityCounter/total;
    return similarityScore;

}

//Function to evaluate where a shorter string has the highest similarity score within a longer string
int bestStrandMatch(string input_strand, string target_strand){

//calculates the amount of times the loops should be repeated based on lengths of the strings
int timesRepeated = input_strand.length() - target_strand.length() + 1;

double max = 0, currentStrandSimilarity;
int alignmentIndex = 0;
  
    //The input strand should not be shorter than the target strand and should output a score of 0.0
    if (input_strand.length() < target_strand.length()){
        cout << "Best similarity score: 0.0" << endl;
        return -1;
    }

    //Loop to determine similarity scores of target strand at every character of the input strand
    for (int i = 0; i < timesRepeated; i++){
        //creates a "modified" string of the input string to compare with the target string
        string input_strand_modified = input_strand.substr(i, target_strand.length());
        
        //determines the similarity score of the current comparison and stores in a new variable
        currentStrandSimilarity = strandSimilarity(input_strand_modified, target_strand);

        //if function to determine the highest similarity score
        if (currentStrandSimilarity > max){
            max = currentStrandSimilarity;
            //stores the amount the target strand has shifted
            alignmentIndex = i;
        }

    }

    //outputs the best similarity score, accounting for significant digits
    if (alignmentIndex == 0){
        cout << "Best similarity score: " << max << endl;
    } else if(max == 0){
        cout << "Best similarity score: " << fixed << setprecision(1) << max << endl;
    } else {
        cout << "Best similarity score: " << max << endl;
    }

return alignmentIndex;

}

//Function to find mutations (insertion, deletion, substitution) between two strands
void identifyMutations(string input_strand, string target_strand){

    //decalres the alignment and defines the best strand similarity amount
    int alignment = 0;
    int similarityScore = strandSimilarity(input_strand, target_strand);

    //If the length of the input strand is greater than the length of target strand...
    if (input_strand.length() > target_strand.length()){
        //calculates and outputs alignment index by running function bestStrandMatch
        alignment = bestStrandMatch(input_strand, target_strand);
        cout << "Best alignment index: " << alignment << endl;

        //based on the alignment, create new string variables that store the front and back excess of the input string
        //also stores a modifed version of input string that is as long as the target strand
        string stringFrontInput = input_strand.substr(0, alignment);
        string stringBackInput = input_strand.substr(alignment + target_strand.length(), input_strand.length());
        string input_strand_modified = input_strand.substr(alignment, (alignment + target_strand.length()));

        //if alignment is greater than 0, it means that there is excess at the start of the input strand, resulting in deletion
        if (alignment > 0){
            for (int i = 0; i < alignment; i++){
                cout << "Deletion at position " << (i+1) << ": " << stringFrontInput[i] << " is deleted in target strand" << endl;
            }
            //If the two strands are not perfectly similar at alignment, it results in a substitution where the letters don't match
            if (similarityScore != 1){
                for (unsigned int i = 0; i < target_strand.length(); i++){
                    if (input_strand_modified[i] != target_strand[i]){
                        cout << "Substitution at position " << (alignment+i+1) << ": " << input_strand_modified[i] << " -> " << target_strand[i] << endl;
                    }
                }
            }
            //excess at the back part of the input strand
            for (unsigned int i = (alignment + target_strand.length()); i < input_strand.length(); i++){
                cout << "Deletion at position " << (i+1) << ": " << input_strand[i] << " is deleted in target strand" << endl;
            }

        //if there is no alignment at all, then only determine substitutions and deletions at the end of input strand
        } else if (alignment == 0) {
            if (similarityScore != 1){
                for (unsigned int i = 0; i < target_strand.length(); i++){
                    if (input_strand_modified[i] != target_strand[i]){
                        cout << "Substitution at position " << (alignment+i+1) << ": " << input_strand_modified[i] << " -> " << target_strand[i] << endl;
                    }
                }
            }
            for (unsigned int i = (alignment + target_strand.length()); i < input_strand.length(); i++){
                cout << "Deletion at position " << (i+1) << ": " << input_strand[i] << " is deleted in target strand" << endl;
            }
        }

    //bestStrandMatch only runs if input strand length is greater or equal to target strand length
    //therefore, if this is not the case, swap what is inputted in the function
    } else if (target_strand.length() > input_strand.length()){
        //calculates and outputs alignment index by running function bestStrandMatch
        alignment = bestStrandMatch(target_strand, input_strand);
        cout << "Best alignment index: " << alignment << endl;

        //based on the alignment, create new string variables that store the front and back excess of the target string
        //also stores a modifed version of input string that is as long as the input strand
        string stringFrontInput = target_strand.substr(0, alignment);
        string stringBackInput = target_strand.substr(alignment + input_strand.length(), target_strand.length());
        string target_strand_modified = target_strand.substr(alignment, (alignment + input_strand.length()));

        //if alignment is greater than 0, it means that there is excess at the start of the input strand, resulting in insertion
        if (alignment > 0){
            for (int i = 0; i < alignment; i++){
                cout << "Insertion at position " << (i+1) << ": " << stringFrontInput[i] << " is inserted in target strand" << endl;
            }
            //If the two strands are not perfectly similar at alignment, it results in a substitution where the letters don't match
            if (similarityScore != 1){
                for (unsigned int i = 0; i < input_strand.length(); i++){
                    if (target_strand_modified[i] != input_strand[i]){
                        cout << "Substitution at position " << (alignment+i+1) << ": " << input_strand[i] << " -> " << target_strand_modified[i] << endl;
                    }
                }
            }
            //excess at the back part of the input strand
            for (unsigned int i = (alignment + input_strand.length()); i < target_strand.length(); i++){
                cout << "Insertion at position " << (i+1) << ": " << target_strand[i] << " is inserted in target strand" << endl;
            }

        //if there is no alignment at all, then only determine substitutions and deletions at the end of input strand
        } else if (alignment == 0) {
            if (similarityScore != 1){
                for (unsigned int i = 0; i < input_strand.length(); i++){
                    if (target_strand_modified[i] != input_strand[i]){
                        cout << "Substitution at position " << (alignment+i+1) << ": " << input_strand[i] << " -> " << target_strand_modified[i] << endl;
                    }
                }
            }
            for (unsigned int i = (alignment + input_strand.length()); i < target_strand.length(); i++){
                cout << "Insertion at position " << (i+1) << ": " << target_strand[i] << " is inserted in target strand" << endl;
            }
        }

    //if the length of both strands are the same there can only be substitutions at most
    } else if (input_strand.length() == target_strand.length()){
        alignment = bestStrandMatch(target_strand, input_strand);
        cout << "Best alignment index: " << alignment << endl;
        //if the two strands are perfectly similar, there are no mutations
        if (similarityScore == 1){
            cout << "No mutations found." << endl;
        //if there are differences within the two strings, there are substitutions where letters don't match
        } else {
        for (unsigned int i = 0; i < input_strand.length(); i++){
                    if (input_strand[i] != target_strand[i]){
                        cout << "Substitution at position " << (alignment+i+1) << ": " << input_strand[i] << " -> " << target_strand[i] << endl;
                    }
            }
        }
    }

    

}

//function to transcribe DNA to RNA
void transcribeDNAtoRNA (string strand){
    //go through all letters within the strand, and if it is T, change it to U
    for (unsigned int i = 0; i < strand.length(); i++){
        if (strand[i] == 'T'){
            strand[i] = 'U';
        }

        cout << strand[i];
    }
}

//function to output a reverse complement of a strand
void reverseComplement(string strand){

int length;
char reversed;
length = strand.length();

//loop to go through each character within the strand
for (int i = 0; i < length; i++){
    //the reversed character will be the character at the end corresponding to the position it is at within the original strand
    reversed = strand.at(length-i-1);
        //if statement matches the reversed letter with its complement
        if (reversed == 'A'){
            reversed = 'T';
        } else if (reversed == 'T'){
            reversed = 'A';
        } else if (reversed == 'C'){
            reversed = 'G';
        } else if (reversed == 'G'){
            reversed = 'C';
        }

        //print each letter
        cout << reversed;
        
}

}

//function to evaluate a possible frame further
int evaluateFrame(int start, string strand){
    int endingPoint, lengthInBetween, remainingStrandLength = 0, counter = 0;

    //check for a possible end of the frame (TAA, TAG, TGA)
    for (unsigned int j = start + 1; j < strand.length(); j++){
        if (strand.substr(j, 3) == "TAA" || strand.substr(j, 3) == "TAG" || strand.substr(j, 3) == "TGA"){
            endingPoint = j;
            lengthInBetween = (endingPoint - start) - 1;
            //if there is an end, check whether the length of the characters in between start and end is divisible by 3
            //if valid frame, then counter goes up by 1
            if (lengthInBetween %3 == 0){
                counter++;
                break;
            }
        }
    }
    
    //if there is a valid frame, then output the frame
    //then, calculate the length of the remaining strand WITHOUT the frame
    if (counter > 0){
    cout << strand.substr(start - 2, lengthInBetween + 6) << endl;
    remainingStrandLength = (strand.length() - (endingPoint + 3));
    //if there is not a valid frame, then return -1
    } else {
        remainingStrandLength = -1;
    }

return remainingStrandLength;
}

//function to return the length of the remaining strand after finding a frame
int lengthFrame(string strand){

int startingPoint, remainingStrandLength = 0, counter = 0;

    //checks for the start of a frame (ATG)
    //if true, counter goes up by 1
    for (unsigned int i = 0; i < strand.length(); i++){
        if (strand.substr(i, 3) == "ATG"){
            startingPoint = i + 2;
            counter++;
            break;
        }
    }

    //if there is a start (ATG) then call evaluateFrame to see whether there is an end and whether that frame is valid
    if (counter > 0){
    remainingStrandLength = evaluateFrame(startingPoint, strand);
    //if there is no start (ATG) then return -1
    } else {
        remainingStrandLength = -1;
    }
    return remainingStrandLength;
}

//function to find and output reading frames within a DNA sequence
void getCodingFrames(string strand){

int lengthOfFrame;

//run the function lengthFrame to find any frames
lengthOfFrame = lengthFrame(strand);

//if initial strand is less than 6, there cannot be any reading frames because a frame consists of a start (ATG) and an end (TAG, TAA, TGA)
if (strand.length() < 6){
    cout << "No reading frames found." << endl;
//if the function found no frames, then it returns -1
//therefore, if it equals -1, there are no reading frames
} else if (lengthOfFrame == -1){
    //there could be possible frames beyond the first start (ATG) that is found
    //this code will account for that
    strand = strand.substr(3, lengthOfFrame);
    lengthOfFrame = lengthFrame(strand);
    if (lengthOfFrame == -1){
        cout << "No reading frames found." << endl;
    }
}

//while the length of the strand is greater than 6, the code will loop over and over until there possibly could not be anymore frames (when its length is less than 6)
while (lengthOfFrame > 6){
    strand = strand.substr(strand.length() - lengthOfFrame, lengthOfFrame);
    lengthOfFrame = lengthFrame(strand);
}

}

int main(){

int userChoice;

//output the initial menu and input the user's choice
cout << "--- DNA Analysis Menu ---" << endl 
<< "1. Calculate the similarity between two sequences of the same length" << endl
<< "2. Calculate the best similarity between two sequences of either equal or unequal length" << endl
<< "3. Identify mutations" << endl
<< "4. Transcribe DNA to RNA" << endl
<< "5. Find the reverse complement of a DNA sequence" << endl
<< "6. Extract reading frames" << endl
<< "7. Exit" << endl
<< "Please enter your choice (1 - 7):" << endl;

cin >> userChoice;

//repeat the output of the menu until the user enters a valid number if the user does not input a valid number
do {

cout << "Invalid input. Please select a valid option." << endl
<< "--- DNA Analysis Menu ---" << endl 
<< "1. Calculate the similarity between two sequences of the same length" << endl
<< "2. Calculate the best similarity between two sequences of either equal or unequal length" << endl
<< "3. Identify mutations" << endl
<< "4. Transcribe DNA to RNA" << endl
<< "5. Find the reverse complement of a DNA sequence" << endl
<< "6. Extract reading frames" << endl
<< "7. Exit" << endl
<< "Please enter your choice (1 - 7):" << endl;

cin >> userChoice;

}while (userChoice < 1 || userChoice > 7);


//if the user chooses option 1
if (userChoice == 1){

}

}
