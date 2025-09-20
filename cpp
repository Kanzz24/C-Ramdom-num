#include <iostream>
#include <cstdlib>   
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    

    int secretNumber = rand() % 100 + 1;
    int Player;
    int attempts = 0;
    int maxAttempts = 10;  
    
    cout << "Game Random Number 1-100" << endl;
    cout << "You have a chance to guess all of them " << maxAttempts << " Round " << endl;

    while (attempts < maxAttempts) {
        cout << "\nEnter the number you guessed : ";
        cin >> Player;
        attempts++; 

        if (Player == secretNumber) {
            cout << "very good !! correct = " << secretNumber << endl;
            cout << "You spent it all " << attempts << "Round" << endl;
            break;
        } else if (Player < secretNumber) {
            cout << "It's too little, go up" << endl;
        } else {
            cout << "It's too much. More!" << endl;
        }
    }
    return 0;
}
