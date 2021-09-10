#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    char guessWords[][16] = {
        "green",
        "yellow",
        "purple",
        "windows",
        "linux",
        "apple"
    };

    // random word
    int randomIndex = rand() % 6;

    int numLives = 5;
    int numCorrect = 0;
    int oldCorrect = 0;

    int lengthofWord = strlen(guessWords[randomIndex]);
    int letterGuessed[8] = {0,0,0,0,0,0,0,0} ;

    int quit =0;

    int loopIndex = 0;

    char guess[16];

    printf("GuessWords : %s Index : %d length : %d\n",guessWords[randomIndex],randomIndex , lengthofWord);
    char letterEntered ;
    //game loop
    while (numCorrect < lengthofWord)
    {   
        printf("\n Hangman Word : ");
         for(loopIndex = 0 ; loopIndex<lengthofWord ; loopIndex++)
        {
            if(letterGuessed[loopIndex] == 1)
            {
                printf("%c",guessWords[randomIndex][loopIndex]);
            }
            else{
                printf(" _ ");
            }

        }
        printf("\n");

        oldCorrect = numCorrect;
        printf ("letters correct so far : %d\n ",numCorrect);
        printf ("Enter a letter : ");
        fgets(guess , 16 ,stdin);

        if(strncmp (guess , "quit" , 4 ) == 0)
        {
            quit = 1;
            break;
        }

        letterEntered = guess[0];

        printf("letter Entered : %c\n",letterEntered);

        for(loopIndex = 0 ; loopIndex<lengthofWord ; loopIndex++)
        {
            if(letterGuessed[loopIndex] == 1)
            {
                continue;
            }
            if(letterEntered == guessWords[randomIndex][loopIndex])
            {
                letterGuessed[loopIndex] = 1;
                numCorrect++; 
            }
        }
        if(oldCorrect == numCorrect)
        {
            numLives--;
            printf("wrong guess , %d Lives left \n",numLives);
            if(numLives == 0)
            {
                break;
            }
        }
        else{
            printf("Correct Guess!!!! , %d Lives left \n",numLives);
        }
    }

    if(quit == 1)
    {
        printf("\nPlayer left the game\n");
    }
    else if(numLives == 0)
    {
        printf("You Lose , the word was : %s\n",guessWords[randomIndex]);
    }
    else
    {
        printf("You Win");
    }
    

    return 0;
}
