#pragma once // this makes sure elements imported are only imported once
#include <string>
#ifndef BULLS_AND_COWS_WORD_CONSOLE_GAME_FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME_H
#define BULLS_AND_COWS_WORD_CONSOLE_GAME_FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME_H
#endif //BULLS_AND_COWS_WORD_CONSOLE_GAME_FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME_H

class FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME    {
public: // the public inteface
    void Reset(); // make a much more return value
    int GetMaxTries();
    int GetCurrentTry();
    bool IsGameWon();
    bool CheckGuessValidity(std::string);
private: // private interface and member variables
    int MyCurrentTry;
    int MyMaxTries;
};