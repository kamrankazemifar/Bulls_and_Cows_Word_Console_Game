/* This is the console executable, that makes use of the BullCow class
 * This acts as the view for the MVC pattern, and is responsible for all user interaction. For game logic see the
 * FBulls_and_Cows_Game_Word_Console_Game class.
 */


#include <iostream>
#include <string>
#include "FBulls_and_Cows_Game_Word_Console_Game.h"

using FText = std::string; // FText is used to improve user interaction, hence why it is being used in main.cpp
using int32 = int;

void PrintIntro()   { // void is where you are not returning a value
    // introducing the game
    FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME BCGame;
    std::cout << "Welcome to Bulls and Cows, a fun word game." << std::endl; // console output
    std::cout << "Can you guess the " << BCGame.GetHiddenWordLength() << " letter isogram I am thinking of?" << std::endl; // console output calling the constant value stored in the variable
    std::cout << std::endl;
    return;
}

FText GetGuess()   {
    FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME BCGame;
    int32 CurrentTry = BCGame.GetCurrentTry();
    // get a guess from the player
    std::cout << "Try " << CurrentTry << "  Enter your guess: ";
    FText Guess = "";
    getline(std::cin, Guess);
    return Guess;
}

void PlayGame() {

    FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME BCGame; // instantiation of a new game (making an instance of a new game)
    int32 MaxTries = BCGame.GetMaxTries();
    BCGame.Reset();
    std::cout << "Maximum number of tries: " <<  MaxTries << std::endl;

    // loop for the number of turns asking for guesses
    // later chance the for loop to a while loop once we are validating the tries
    for (int32 count = 1; count <= MaxTries; count++)    {
        FText Guess = GetGuess(); // make the loop check for valid guesses
        // submit the valid guess to the game
        FBullCowCount BullCowCount = BCGame.SubmitGuess(Guess);
        // output the number of bulls and cows
        std::cout << "Bulls = " << BullCowCount.Bulls << std::endl;
        std::cout << "Cows = " << BullCowCount.Cows << std::endl;
        //repeat the guess back to the user
        std::cout << "Your guess was: " << Guess << std::endl;
        std::cout << std::endl;

    }
}

bool AskToPlayAgain()   {
    std::cout <<"Do you want to play again? (Y/N)" << std::endl;
    FText Response = "";
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