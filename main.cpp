#include <iostream>
#include <string>

using namespace std; // this uses the standard library which contains definitions such as cin, cout and endl

void PrintIntro()   { // void is where you are not returning a value
    // introducing the game
    constexpr int WORD_LENGTH = 9; // this is for using a value that does not change with datatype integer, the compiler cannot change the value of this variable once the program has run
    cout << "Welcome to Bulls and Cows, a fun word game." << endl; // console output
    cout << "Can you guess the " << WORD_LENGTH << " letter isogram I am thinking of?" << endl; // console output calling the constant value stored in the variable
    cout << endl;
    return;
}

string GetGuess()   {
    // get a guess from the player
    cout << "Enter your guess: ";
    string Guess = "";
    getline(cin, Guess);
    return Guess;
}

void PlayGame() {
    // loop for the number of turns asking for guesses
    constexpr int NUMBER_OF_TURNS = 5;
    for (int count = 1; count <= NUMBER_OF_TURNS; count++)    {
        string Guess = GetGuess();
        //repeat the guess back to the user
        cout << "Your guess was: " << Guess << endl;
        cout << endl;
    }
}

int main() { // the entry point of the application
    PrintIntro();
    PlayGame();
    cout << endl;
    return 0;
}