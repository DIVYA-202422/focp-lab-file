#include <iostream>
using namespace std;

int main() {
    int seed, target, guess, attempts = 5;
    
    cout << "Enter a seed number: ";
    cin >> seed;
    
    target = (seed * 7) % 100 + 1; // Generate a pseudo-random number based on user input
    
    cout << "Guess the number (between 1 and 100). You have " << attempts << " attempts!" << endl;
    
    while (attempts > 0) {
        cout << "Enter your guess: ";
        cin >> guess;
        
        if (guess == target) {
            cout << "Congratulations! You guessed the number correctly!" << endl;
            return 0;
        } else if (guess < target) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
        
        attempts--;
        cout << "Attempts remaining: " << attempts << endl;
    }
    
    cout << "Game over! The correct number was " << target << "." << endl;
    return 0;
}