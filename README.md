# Guessing Game - Multi-Player Edition

## Description

The Guessing Game - Multi-Player Edition is a fun program that allows multiple players to play a guessing game. The computer generates a random number between 1 and 100, and each player takes turns guessing the number. The program provides feedback to each player, indicating whether their guess is higher or lower than the generated number. The game continues until each player successfully guesses the correct number. The winner is determined based on the number of guesses they took to arrive at the correct number.

## Features

- Multi-player game: Multiple players can participate and take turns guessing.
- Random Number: The computer generates a random number between 1 and 100 for each player.
- Guess Feedback: The program provides feedback on whether the guess is too high or too low.
- Number of Guesses: The number of guesses taken by each player is recorded.
- Winner Determination: The player with the least number of guesses is declared the winner.

## How to Play

1. Run the program.
2. Enter the number of players who wish to participate.
3. Each player will be asked to enter their first name.
4. The computer will generate a random number for each player.
5. Players will take turns guessing the number.
6. If the guess is incorrect, the program will provide feedback to try a higher or lower number.
7. The game continues until each player correctly guesses their respective numbers.
8. After all players have guessed correctly, the program will display the results, including the number of guesses taken by each player and the winner.

## Setup

1. Clone this repository to your local machine.
2. Compile and run the program using a C compiler.

## Example Output

```
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ INSTRUCTIONS ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
==================== GUESSING GAME ====================
## This is a multi-player game.
\a\a\a\a\a\a\a## The computer will generate a number randomly between 1 to 100.
## You make a guess.
## The computer will indicate whether your guess is higher or lower than the generated number.
## Now you can change you guessed number.
## The computer will continue indicating until you guess the correct number.
## The number of guesses will be noted.
## The one with the less number of guesses will be the winner.

Enter the number of players : 3

***************************** Welcome Player Number 1 *****************************
Please state your first name only: Alice

Enter your guessed number, please : 50
Guess is too high. Try a lower number : 30
Guess is too low. Try a higher number : 40
BINGO
Your Number of Guesses is recorded. Please step aside, so that the next player can play.

***************************** Welcome Player Number 2 *****************************
Please state your first name only: Bob

Enter your guessed number, please : 70
Guess is too high. Try a lower number : 60
Guess is too high. Try a lower number : 55
Guess is too low. Try a higher number : 58
BINGO
Your Number of Guesses is recorded. Please step aside, so that the next player can play.

***************************** Welcome Player Number 3 *****************************
Please state your first name only: Carol

Enter your guessed number, please : 25
Guess is too low. Try a higher number : 35
Guess is too low. Try a higher number : 45
Guess is too high. Try a lower number : 42
Guess is too low. Try a higher number : 44
BINGO

*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*# Here are the results *#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#
The Position Number 1 goes to Carol. The number of guesses she took = 5
The Position Number 2 goes to Alice. The number of guesses she took = 3
The Position Number 3 goes to Bob. The number of guesses he took = 4

Congratulations to all Winners.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ THANK YOU FOR PARTICIPATING ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
```
