# Hangman-Game
## Desciption
Hangman is a paper and pencil guessing game for two or more players. One player thinks of a word, phrase or sentence and the other(s) tries to guess it by suggesting letters within a certain number of guesses.

The following example game illustrates a player trying to guess the word hangman using a strategy based solely on letter frequency. As the player continues, number of letters left gets decreased by one if the word is incorrect . Once a words left are over, the game is over, and the player lost.

### No.of guesses : 6
1) Word: hangman <br />
Guess: **E** <br />
Misses: <br />
incorrect!!!!

### No. of guesses :5
2) Word: _ _ _ _ _ _ _ <br />
Guess: **T** <br />
Misses: E <br />
incorrect!!!!

### No. of guesses :4
3) Word: _ _ _ _ _ _ _ <br />
Guess: **A** <br />
Misses: E T<br />
Correct!!!

### No. of guesses :4
4) Word: _ a _ _ _ a _ <br />
Guess: **O** <br />
Misses: E T<br />
Incorrect!!!

### No. of guesses :3
5) Word: _ a _ _ _ a _ <br />
Guess: **I** <br />
Misses: E, T, O<br />
Incorrect!!!

### No. of guesses :2
6) Word: _ a _ _ _ a _ <br />
Guess: **S** <br />
Misses: E, T, O, I<br />
Incorrect!!!

### No. of guesses :1
7) Word: _ a _ _ _ a _ <br />
Guess: **N** <br />
Misses: E, T, O, I, S<br />
Correct!!!

### No. of guesses :1
8) Word: _ a n _ _ a n <br />
Guess: **R** <br />
Misses: E, T, O, I, S<br />
Incorrect!!!<br />

The guessing player has lost this game as the no. of guesses are 0 before the letters were guessed.

## Goal
Ram and sham both have 12 chocolates and they dont want to split them in two equal halfs so Ram comes up with this game and gives 6 chocolates to sham and guesses a word and every time sham gusses the incorrect letter he loses one chocolate. If sham guesses the word he will get all the chocolates. The one with all chocolates wins. Help Ram build this game.

## Specifications
The game is built in C language and requird libraries are yet to be imported.

## Design
The first line in the game is going to show the name of the game <br />
then the word will be inserted that needs to be guessed.After that an area will be provided to enter the letters according to that wrong or right will be judged.
