//this file contains class functions

#pragma once // this makes sure elements imported are only imported once
#include <string>

using FString = std::string;
using int32 = int;

struct FBullCowCount { // this is similar to class however all members are public and this is ideal for simple data types
    int32 Bulls = 0; // a variable with a 32 bit integer datatype initialised to 0
    int32 Cows = 0; // a variable with a 32 bit integer datatype initialised to 0
};

enum class EGuessStatus    {// the difference between a class enumeration and enumeration is that it fixes global scope issues with repeating definitions
    Invalid_Status,
    OK,
    Not_Isogram,
    Wrong_Length,
    Not_Lowercase
};

class FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME    {
public: // the public interface
    FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME(); // constructor
    void Reset(); // make a much more return value
    int32 GetMaxTries() const; // this prevents any possible chance the value can be changed
    int32 GetCurrentTry() const;
    int32 GetHiddenWordLength() const;

    bool IsGameWon() const;
    EGuessStatus CheckGuessValidity(FString) const;

    //counts Bulls and Cows and increases the try number assuming valid guess
    FBullCowCount SubmitValidGuess(FString);

private: // private interface and member variables
    // see constructor for initialisation
    int32 MyCurrentTry; // this value is given at compile time (if a value has been equated)
    // provide a method for counting bulls & cows, and incrementing turn number
    FString MyHiddenWord;
    bool bGameIsWon = false;
    bool IsIsogram(FString) const;
    bool IsLowercase(FString) const;
};