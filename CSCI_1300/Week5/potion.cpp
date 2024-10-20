#include <iostream>
#include <algorithm>

using namespace std;

//define main function
int main (){
//define variables, type of potion, ingredients, remaining ingredients
int potionType, health, magic, tealeaves, sunflowers, toadstools, pine;
int remtealeaves, remsunflowers, remtoadstools, rempine;
int valtealeaves, valsunflowers, valtoadstools, valpine;

//do while function to determine which priority
cout << "Select a potion crafting priority:" << endl << "1. Health Potion" << endl << "2. Magic Potion" << endl;
cin >> potionType;
if ((potionType > 2) || (potionType < 1)){
    do {
        cout << "Invalid input. Please select 1 or 2." << endl;
        cin >> potionType;
    } while ((potionType > 2) || (potionType < 1));
}

//enter user input of number of ingredients
cout << "How many Tealeaves do you have?" << endl;
cin >> tealeaves;
if (tealeaves < 0){
    do {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        cout << "How many Tealeaves do you have?" << endl;
        cin >> tealeaves;
    } while (tealeaves < 0);
    }
cout << "How many Sunflowers do you have?" << endl;
cin >> sunflowers;
if (sunflowers < 0){
    do {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        cout << "How many Sunflowers do you have?" << endl;
        cin >> sunflowers;
    } while (sunflowers < 0);
    }
cout << "How many Toadstools do you have?" << endl;
cin >> toadstools;
if (toadstools < 0){
    do {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        cout << "How many Toadstools do you have?" << endl;
        cin >> toadstools;
    } while (toadstools < 0);
    }
cout << "How many Pine Needles do you have?" << endl;
cin >> pine;
if (pine < 0){
    do {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        cout << "How many Pine Needles do you have?" << endl;
        cin >> pine;
    } while (pine < 0);
    }

//if health potion
if (potionType == 1){
//calculate the remaining ingredients
remtealeaves = tealeaves % 6;
valtealeaves = tealeaves/6;

remsunflowers = sunflowers % 1;
valsunflowers = sunflowers/1;

remtoadstools = toadstools % 5;
valtoadstools = toadstools/5;

rempine = pine % 2;
valpine = pine/2;

//evaluate which is the lowest number
//put this lowest number into health potions
health = min({valpine, valsunflowers, valtealeaves, valtoadstools});

remtealeaves = tealeaves - health * 6;
remsunflowers = sunflowers - health * 1;
remtoadstools = toadstools - health * 5;
rempine = pine - health * 2;

    // cout << valtealeaves << " " << valsunflowers << " " << valtoadstools << " " << valpine << endl;
    // cout << remtealeaves << remsunflowers << remtoadstools << rempine << endl;

    if (health == 0) {
        valtealeaves = tealeaves/2;

        valsunflowers = sunflowers/3;

        valtoadstools = toadstools/10;

        valpine = pine/1;
        //evaluate which is the lowest number
        //put this lowest number into magic potions
        magic = min({valpine, valsunflowers, valtealeaves, valtoadstools});

        //output total potions
        cout << "You can make " << health << " Health potion(s) and " << magic << " Magic potion(s)." << endl;
        return 0;
    }

//with remaining ingredients, calculate again but for magic
valtealeaves = remtealeaves/2;

valsunflowers = remsunflowers/3;

valtoadstools = remtoadstools/10;

valpine = rempine/1;
//evaluate which is the lowest number
//put this lowest number into magic potions
magic = min({valpine, valsunflowers, valtealeaves, valtoadstools});

//output total potions
cout << "You can make " << health << " Health potion(s) and " << magic << " Magic potion(s)." << endl;

}

//if magic potion
else if (potionType == 2){
//calculate the remaining ingredients
remtealeaves = tealeaves % 2;
valtealeaves = tealeaves/2;

remsunflowers = sunflowers % 3;
valsunflowers = sunflowers/3;

remtoadstools = toadstools % 10;
valtoadstools = toadstools/10;

rempine = pine % 1;
valpine = pine/1;

//evaluate which is the lowest number
//put this lowest number into health potions
magic = min({valpine, valsunflowers, valtealeaves, valtoadstools});
    // cout << valtealeaves << " " << valsunflowers << " " << valtoadstools << " " << valpine << endl;
    // cout << remtealeaves << remsunflowers << remtoadstools << rempine << endl;

    remtealeaves = tealeaves - magic * 2;
    remsunflowers = sunflowers - magic * 3;
    remtoadstools = toadstools - magic * 10;
    rempine = pine - magic * 1;

    if (magic == 0) {
        valtealeaves = tealeaves/6;

        valsunflowers = sunflowers/1;

        valtoadstools = toadstools/5;

        valpine = pine/2;
        //evaluate which is the lowest number
        //put this lowest number into magic potions
        health = min({valpine, valsunflowers, valtealeaves, valtoadstools});

        //output total potions
        cout << "You can make " << magic << " Magic potion(s) and " << health << " Health potion(s)." << endl;
        return 0;
    }

//with remaining ingredients, calculate again but for health
valtealeaves = remtealeaves/6;

valsunflowers = remsunflowers/1;

valtoadstools = remtoadstools/5;

valpine = rempine/2;
//evaluate which is the lowest number
//put this lowest number into magic potions
health = min({valpine, valsunflowers, valtealeaves, valtoadstools});

//output total potions
cout << "You can make " << magic << " Magic potion(s) and " << health << " Health potion(s)." << endl;

}
}