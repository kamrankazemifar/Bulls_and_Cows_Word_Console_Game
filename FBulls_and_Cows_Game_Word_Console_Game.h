//this file contains class functions

#pragma once // this makes sure elements imported are only imported once
#include <string>

using FString = std::string;
using int32 = int;

struct BullCowCount { // this is similar to class however all members are public and this is ideal for simple data types
        int32 Bulls = 0; // a variable with a 32 bit integer datatype initialised to 0
        int32 Cows = 0; // a variable with a 32 bit integer datatype initialised to 0
};

class FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME    {
public: // the public interface
    FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME(); // constructor
    void Reset(); // make a much more return value
    int32 GetMaxTries() const; // this prevents any possible chance the value can be changed
    int32 GetCurrentTry() const;
    bool IsGameWon() const;
    bool CheckGuessValidity(FString);

    //counts Bulls and Cows and increases the try number assuming valid guess
    BullCowCount SubmitGuess(FString);

private: // private interface and member variables
    // see constructor for initialisation
    int32 MyCurrentTry; // this value is given at compile time (if a value has been equated)
    int32 MyMaxTries; // this value is given at compile time (if a value has been equated)
    // provide a method for counting bulls & cows, and incrementing turn number
    FString MyHiddenWord;
};