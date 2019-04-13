// these are declarations as definitions for the header file

#include "FBulls_and_Cows_Game_Word_Console_Game.h" //use quotes for finding elements that have been created, chevrons are used for libraries

using int32 = int;

FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME()    {
    Reset();
}

void FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::Reset()   { // this is a member function
    constexpr int32 MAX_TRIES = 8;
    MyMaxTries = MAX_TRIES;
    MyCurrentTry = 1;
    return;
}

int32 FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::GetMaxTries() const { // this provides the run time value
    return MyMaxTries;
}

int32 FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::GetCurrentTry() const { // this provides the run time value
    return MyCurrentTry;
}

bool FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::IsGameWon() const {
    return 0;
}

bool FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::CheckGuessValidity(FString) {
    return false;
}

