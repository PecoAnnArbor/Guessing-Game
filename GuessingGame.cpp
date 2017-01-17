// This is the guessing game

#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

int redo() {
    int number, randnum;
    char yn;
    cout << "Hi user today you will guess a number from 0 ~ 100" << endl;
    randnum = rand() % 100;
    cout << "Please enter the number that you are guessing : ";
    cin >> number;
    
    //While starts here
    
    while (number != randnum) {
        cout << "The number was not the random number please guess again: ";
        cin >> number;
    }
    cout << "Congrats you got the word right\n";
    cout << "Do you want to play again or not (y | n)";
    cin >> yn;
    
    if (yn == 'n') {
        exit(0);
    }
    
    if (yn == 'y') {
        redo();
    }
    
    
    return 0;
}


int main() {
    int number, randnum;
    char yn;
    cout << "Hi user today you will guess a number from 0 ~ 100";
    randnum = rand() % 100;
    cout << "Please enter the number that you are guessing :";
    cin >> number;
    
    //While loop starts here
    
    while (number != randnum) {
        cout << "The number was not the random number please guess again: ";
        cin >> number;
    }
    cout << "Congrats you got the word right\n";
    cout << "Do you want to play again or not (y | n)";
    cin >> yn;
    
    if (yn == 'n') {
        exit(0);
    }
    
    if (yn == 'y') {
        redo();
    }
    
    return 0;
}


