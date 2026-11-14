A Number-Guessing game, written entirely in C.

True Randomness: Uses `srand(time(NULL))` so every game generates a fresh, unpredictable secret number.\
Balanced Difficulty: Uses binary-search-inspired attempt limits (e.g., 7 to 10 attempts for a 1–100 range) so the game is fair and solvable.\
Smart Hints: Guides the player after every guess with "Far" or "Close" feedback.\
Replayable: Asks question to player, whether to continue or close the game.

## Steps to run this program :
1. gcc Number_Guess.c -o Guess (Compilation)
2. ./Guess.exe (in Windows), and ./Guess.out (in Mac/Linux) (Program Execution)

## Concepts used :
1. Introduced rand() function in this game to generate random numbers for guessing.
2. While Loop
3. Conditional Statements (If statement is used in this game)
4. Standard I/O, scanf and printf
