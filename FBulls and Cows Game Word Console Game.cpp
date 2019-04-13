// these are declarations as definitions for the header file

#include "FBulls_and_Cows_Game_Word_Console_Game.h" //use quotes for finding elements that have been created, chevrons are used for libraries

using int32 = int;

FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME()    {
    Reset();
}

void FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::Reset()   { // this is a member function
    constexpr int32 MAX_TRIES = 8;
    const FString HIDDEN_WORD = "ant";
    MyMaxTries = MAX_TRIES;
    MyCurrentTry = 1;
    MyHiddenWord = HIDDEN_WORD;
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

EGuessStatus FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::CheckGuessValidity(FString Guess) const { // receives a valid guess and increments the turn and returns count
    if (false)  { // if the guess is not an isogram
        return EGuessStatus::Not_Isogram;
    }
    else if (false) { // if the guess word does not all contain lowercase characters
        return EGuessStatus ::Not_Lowercase;
    }
    else if (Guess.length() != GetHiddenWordLength()) { // if the guess word does not meet the required length
        return EGuessStatus ::Wrong_Length;
    }
    else if (false) {
        return EGuessStatus ::OK;
    }
    return EGuessStatus::OK; // make an actual error later
}

int32 FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::GetHiddenWordLength() const {
    return MyHiddenWord.length();
}

FBullCowCount FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::SubmitGuess(FString Guess)   {
    // increment the turn number
    MyCurrentTry = MyCurrentTry++;

    // setup a return variable
    FBullCowCount BullCowCount; // this is datatype FBullCowCount with the variable FBullCowCount

    // loop through all letters in the guess
    int32 HiddenWordLength = MyHiddenWord.length();
    for (int32 i=0; i < HiddenWordLength; i++) {

        // compare the letters against the hidden word
        for (int32 j=0; j < HiddenWordLength; j++) {
            // if they match
            if (Guess[j] == MyHiddenWord[i])    {
                if (i == j)  { // increment bulls if they are in the same place
                    BullCowCount.Bulls++;
                }
                else {
                BullCowCount.Cows++; // increment cows
                }
            }
        }
    }
    return BullCowCount;
}

