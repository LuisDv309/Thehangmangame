// Thehangmangame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;
//Prototype//
void Line();
void HangMan();
void WalkMan();
void InvertHangMan();

int main() {


    char start{};

    cout << " Welcome to play hangman. This Game is to check your spelling skills" << endl;
    cout << "____________________________________________________________________" << endl;
     HangMan();
     Line();
     WalkMan();
     Line();
     InvertHangMan();
    cout << "\nPress any key (and enter) to start " << endl;
    cin >> start;
    int tries{ 3 }; //This are the numbers of attemps the player has//
    while (tries >= 0) {
        switch (tries) {
        case 3: {

            break;
        }

        case 2:
        {
            break;
        }
        case 1:
        {
            break;
        }


        default: {
            break;
        }

        }
    }


    return 0;

}

void Line() {
    cout << "============================================" << endl;
    
}
void HangMan() {

    cout << "   ____________          " << endl;
    cout << "   ||       |            " << endl;
    cout << "   ||       O            " << endl;
    cout << "   ||       |            " << endl;
    cout << "   ||      /|\\          " << endl;
    cout << "   ||     / | \\         " << endl;
    cout << "   ||      / \\          " << endl;
    cout << "   ||     /   \\         " << endl;
    cout << "   ||                    " << endl;
    cout << " -----                   " << endl;


}
void WalkMan() {
    cout << "                         " << endl;
    cout << "                         " << endl;
    cout << "            O            " << endl;
    cout << "            " << "|" << "              " << "The Walk man" << "       " << endl;
    cout << "           /|\\          " << endl;
    cout << "          / | \\         " << endl;
    cout << "           / \\          " << endl;
    cout << "          /   \\         " << endl;
    cout << "                         " << endl;
    Line();

}
void InvertHangMan() {
    cout << "   ____________          " << endl;
    cout << "   ||       |            " << endl;
    cout << "   ||       |            " << endl;
    cout << "   ||       |            " << endl;
    cout << "   ||      /|\\          " << endl;
    cout << "   ||       |            " << endl;
    cout << "   ||      /O\\          " << endl;
    cout << "   ||                    " << endl;
    cout << "   ||                    " << endl;
    cout << " -----                   " << endl;

}
