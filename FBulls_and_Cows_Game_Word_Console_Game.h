//this file contains class functions

#pragma once // this makes sure elements imported are only imported once
#include <string>

class FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME    {
public: // the public inteface
    FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME(); // constructor
    void Reset(); // make a much more return value
    int GetMaxTries() const; // this prevents any possible chance the value can be changed
    int GetCurrentTry() const;
    bool IsGameWon() const;
    bool CheckGuessValidity(std::string);
private: // private interface and member variables
    // see constructor for initialisation
    int MyCurrentTry; // this value is given at compile time (if a value has been equated)
    int MyMaxTries; // this value is given at compile time (if a value has been equated)
};