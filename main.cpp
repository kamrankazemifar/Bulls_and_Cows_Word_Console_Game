#include <iostream>
#include <string>
#include "FBulls_and_Cows_Game_Word_Console_Game.h"

void PrintIntro()   { // void is where you are not returning a value
    // introducing the game
    constexpr int WORD_LENGTH = 9; // this is for using a value that does not change with datatype integer, the compiler cannot change the value of this variable once the program has run
    std::cout << "Welcome to Bulls and Cows, a fun word game." << std::endl; // console output
    std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I am thinking of?" << std::endl; // console output calling the constant value stored in the variable
    std::cout << std::endl;
    return;
}

std::string GetGuess()   {
    FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME BCGame;
    int CurrentTry = BCGame.GetCurrentTry();
    // get a guess from the player
    std::cout << "Try " << CurrentTry << "Enter your guess: ";
    std::string Guess = "";
    getline(std::cin, Guess);
    return Guess;
}

void PlayGame() {
    FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME BCGame; // instantiation of a new game (making an instance of a new game)
    int MaxTries = BCGame.GetMaxTries();
    std::cout << MaxTries << std::endl;
    // loop for the number of turns asking for guesses
    constexpr int NUMBER_OF_TURNS = 5;
    for (int count = 1; count <= NUMBER_OF_TURNS; count++)    {
        std::string Guess = GetGuess();
        //repeat the guess back to the user
        std::cout << "Your guess was: " << Guess << std::endl;
        std::cout << std::endl;
    }
}

bool AskToPlayAgain()   {
    std::cout <<"Do you want to play again? (Y/N)" << std::endl;
    std::string Response = "";
    getline (std::cin, Response);
    std::cout << std::endl;
    return (Response [0] == 'y') || (Response [0] == 'Y');
}

int main() { // the entry point of the application
    bool bPlayAgain = false;
    do {
        PrintIntro();
        PlayGame();
        bPlayAgain = AskToPlayAgain();
        std::cout << std::endl;
    }
    while (bPlayAgain);
    return 0;
}