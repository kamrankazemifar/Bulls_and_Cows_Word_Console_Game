#include "FBulls_and_Cows_Game_Word_Console_Game.h" //use quotes for finding elements that have been created, chevrons are used for libraries

void FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::Reset()   {

}

int FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::GetMaxTries() {
    return MyMaxTries;
}

int FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::GetCurrentTry() {
    return MyCurrentTry;
}

bool FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::IsGameWon() {
    return 0;
}

bool FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::CheckGuessValidity(std::string) {
    return false;
}