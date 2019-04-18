// these are declarations as definitions for the header file

#include "FBulls_and_Cows_Game_Word_Console_Game.h" //use quotes for finding elements that have been created, chevrons are used for libraries
#include <map>
#define TMap std::map

using int32 = int;

FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME()    { //default constructor
    Reset();
}

void FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::Reset()   { // this is a member function
    const FString HIDDEN_WORD = "planet";
    MyCurrentTry = 1;
    MyHiddenWord = HIDDEN_WORD;
    return;
}

int32 FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::GetMaxTries() const { // this provides the run time value
    TMap<int32, int32> WordLengthToMaxTries { {3, 4}, {4, 7}, {5, 10}, {6, 16}, {7, 20} };
    return WordLengthToMaxTries[MyHiddenWord.length()];
}

int32 FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::GetCurrentTry() const { // this provides the run time value
    return MyCurrentTry;
}

bool FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::IsGameWon() const {

    return bGameIsWon;
}

EGuessStatus FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::CheckGuessValidity(FString Guess) const { // receives a valid guess and increments the turn and returns count
    if (!IsIsogram(Guess))  { // if the guess is not an isogram
        return EGuessStatus::Not_Isogram;
    }
    else if (!IsLowercase(Guess)) { // if the guess word does not all contain lowercase characters
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

FBullCowCount FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::SubmitValidGuess(FString Guess)   { // receives a valid guess, increments the turn and then returns a count
    // increment the turn number
    MyCurrentTry++;

    // setup a return variable
    FBullCowCount BullCowCount; // this is datatype FBullCowCount with the variable FBullCowCount

    // loop through all letters in the hidden word
    int32 WordLength = MyHiddenWord.length(); // assuming same length as guess
    for (int32 i=0; i < WordLength; i++) {

        // compare the letters against the guess
        for (int32 j=0; j < WordLength; j++) {
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
    if (BullCowCount.Bulls == WordLength)   {
        bGameIsWon = true;

    }
    else {
        bGameIsWon = false;
    }
    return BullCowCount;
}

bool FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::IsIsogram(FString Word) const {
    // consider 0 and 1 letter strings or words as isograms
    if (Word.length() <= 1) {
        return true;
    }
    TMap <char, bool> LetterSeen; //setting up the map
    for (auto Letter : Word) {// this means for all letter of the word, auto is used to allow the compiler to determine the datatype
        // loop through all the letters of the word
        Letter = tolower(Letter); // this converts the Letter to lowercase so the program can handle both uppercase and lowercase characters in the string
        if (LetterSeen[Letter]) { // if the letter is in the map
            return false; // this is because at this stage there is not isogram present
        }
        else    {
            LetterSeen[Letter] = true; // add the letter to the map as seen
        }
        //if the letter is in the map
        //we do not have an isogram
        //otherwise
        // add the letter to the map as seen
    }
    return true; // for example in cases where /0 is entered
}

bool FBULLS_AND_COWS_GAME_WORD_CONSOLE_GAME::IsLowercase(FString Word) const { // a parameter is what is being defines, however an argument is what is being called

    for (auto Letter : Word)    {
        if (!islower(Letter))   { // if not a lowercase letter
            return false; // return false
        }
    }
    return false;
}
