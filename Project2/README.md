A Number-Guessing game, written entirely in C.

True Randomness: Uses `srand(time(NULL))` so every game generates a fresh, unpredictable secret number.
Balanced Difficulty: Uses binary-search-inspired attempt limits (e.g., 7 to 10 attempts for a 1–100 range) so the game is fair and solvable.
Smart Hints: Guides the player after every guess with "Far" or "Close" feedback.
Replayable: Lightweight console execution that runs smoothly on any operating system.

## Steps to run this program :
1. gcc Number_Guess.c -o Guess (Compilation)
2. ./Guess.exe (in Windows), and ./Guess.out (in Mac/Linux) (Program Execution)

## Concepts used :
1. While Loop
2. Conditional Statements (If statement is used in this game)
3. Standard I/O, scanf and printf
