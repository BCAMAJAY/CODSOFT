#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have picked a number between 1 and 100. Try to guess it.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else if (guess < randomNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number (" << randomNumber << ") in " << attempts << " attempts!\n";
        }

    } while (guess != randomNumber);

    return 0;
}

