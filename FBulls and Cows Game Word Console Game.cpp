// these are declarations as definitions for the header file

#include "FBulls_and_Cows_Game_Word_Console_Game.h" //use quotes for finding elements that have been created, chevrons are used for libraries

void FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::Reset()   { // this is a member function

}

int FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::GetMaxTries() const {
    return MyMaxTries;
}

int FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::GetCurrentTry() const {
    return MyCurrentTry;
}

bool FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::IsGameWon() const {
    return 0;
}

bool FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::CheckGuessValidity(std::string) {
    return false;
}