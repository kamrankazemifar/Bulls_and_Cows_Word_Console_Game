//this file contains class functions

#pragma once // this makes sure elements imported are only imported once
#include <string>

using FString = std::string;
using int32 = int;

class FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME    {
public: // the public inteface
    FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME(); // constructor
    void Reset(); // make a much more return value
    int32 GetMaxTries() const; // this prevents any possible chance the value can be changed
    int32 GetCurrentTry() const;
    bool IsGameWon() const;
    bool CheckGuessValidity(FString);
private: // private interface and member variables
    // see constructor for initialisation
    int32 MyCurrentTry; // this value is given at compile time (if a value has been equated)
    int32 MyMaxTries; // this value is given at compile time (if a value has been equated)
    // provide a method for counting bulls & cows, and incrementing turn number
};