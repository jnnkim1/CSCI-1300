#include <iostream>

using namespace std;

int main() {

//declare variables
int genre, director, movie;
//user input of animation type
cout << "Select the genre: (1) Animation (2) Adventure" << endl;
cin >> genre;
//switch statement starting with genre, director, then movie
//start with genre
switch (genre) {
    //if animation
    case 1:
    cout << "Select the director: (1) Pete Docter (2) Brad Bird (3) Andrew Stanton" << endl;
    cin >> director;

    switch (director) {
        //if Pete Docter
        case 1:
        cout << "Select the movie: (1) Monsters, Inc. (2) Inside Out" << endl;
        cin >> movie;
        switch (movie) {
            case 1:
            cout << "You have reserved the movie: Monsters, Inc." << endl;
            break;
            case 2:
            cout << "You have reserved the movie: Inside Out" << endl;
            break;
            default:
            cout << "Please enter a valid input" << endl;
            break;
            return 0;

        }

        //break for director case1
        break;

        //if Brad Bird
        case 2:
        cout << "Select the movie: (1) The Incredibles (2) Ratatouille" << endl;
        cin >> movie;
        switch (movie) {
            case 1:
            cout << "You have reserved the movie: The Incredibles" << endl;
            break;
            case 2:
            cout << "You have reserved the movie: Ratatouille" << endl;
            break;
            default:
            cout << "Please enter a valid input" << endl;
            break;
            return 0;
        }

    
        //break for director case2
        break;

        //if Andrew Stanton
        case 3:
        cout << "Select the movie: (1) Finding Nemo (2) WALL-E" << endl;
        cin >> movie;
        switch (movie) {
            case 1:
            cout << "You have reserved the movie: Finding Nemo" << endl;
            break;

            case 2:
            cout << "You have reserved the movie: WALL-E" << endl;
            break;

            default:
            cout << "Please enter a valid input" << endl;
            break;
            return 0;
        }

        //break for director case3
        break;

        default:
            cout << "Please enter a valid input" << endl;
            break;
            return 0;
        
            
        }

        //break for case1 genre
        break;



    //if adventure
    case 2:
    cout << "Select the director: (1) Steven Spielberg (2) Jon Favreau (3) Robert Zemeckis" << endl;
    cin >> director;

    switch (director) {
        //if Steven
        case 1:
        cout << "Select the movie: (1) E.T. the Extra-Terrestrial (2) The BFG" << endl;
        cin >> movie;

        switch (movie) {
            case 1:
            cout << "You have reserved the movie: E.T. the Extra-Terrestrial" << endl;
            break;
            case 2:
            cout << "You have reserved the movie: The BFG" << endl;
            break;
            default:
            cout << "Please enter a valid input" << endl;
            break;
            return 0;
        }
        //break for director case1
        break;

        //if Jon
        case 2:
        cout << "Select the movie: (1) The Jungle Book (2016) (2) Elf" << endl;
        cin >> movie;
        switch (movie) {
            case 1:
            cout << "You have reserved the movie: The Jungle Book (2016)" << endl;
            break;
            case 2:
            cout << "You have reserved the movie: Elf" << endl;
            break;
            default:
            cout << "Please enter a valid input" << endl;
            break;
            return 0;
        }
        //break for director case2
        break;

        //if Robert
        case 3:
        cout << "Select the movie: (1) Back to the Future (2) Who Framed Roger Rabbit" << endl;
        cin >> movie;
        switch (movie) {
            case 1:
            cout << "You have reserved the movie: Back to the Future" << endl;
            break;
            case 2:
            cout << "You have reserved the movie: Who Framed Roger Rabbit" << endl;
            break;
            default:
            cout << "Please enter a valid input" << endl;
            break;
            return 0;
        }
        default:
            cout << "Please enter a valid input" << endl;
            break;
            return 0;
        //break for director case3
        break;

    //break for genre case2
    break;

        }
    return 0;

    //if neither animation or adventure
    default:
    cout << "Please enter a valid input" << endl;
    break;
    return 0;

}



    return 0;
}