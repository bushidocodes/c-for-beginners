#include <stdio.h>
#include <stdlib.h>

// -1 if not endgame, 0 for tie, 1 for player 1 win, 2 for player 2 win
int checkForWin(char gameboard[]);
void drawBoard(char gameboard[]);
void markboard(char gameboard[], int currentPlayer);

int main(void)
{
    char gameboard[10] = "0123456789";
    int currentPlayer = 1;
    int gameState = -1;
    /* Updating gameState in conditional to avoid redundant invocations */
    while ((gameState = checkForWin(gameboard)) == -1)
    {

        drawBoard(gameboard);
        markboard(gameboard, currentPlayer);
        currentPlayer = currentPlayer == 1 ? 2 : 1;
    }
    drawBoard(gameboard);
    if (gameState == 1)
    {
        printf("Player 1 wins!\n");
    }
    else if (gameState == 2)
    {
        printf("Player 2 wins!\n");
    }
    else if (gameState == 0)
    {
        printf("Tie Game\n");
    }
}

void drawBoard(char gameboard[])
{
    system("clear"); /* Clear the screen to give the illusion of a rerender. Not portable! */
    printf("        Tic Tac Toe\n");
    printf("\n");
    printf("Player 1 (X)  -  Player 2 (O)\n");
    printf("\n");
    printf("\n");
    printf("           |     |     \n");
    printf("        %c  |  %c  |  %c  \n", gameboard[1], gameboard[2], gameboard[3]);
    printf("      _____|_____|_____\n");
    printf("           |     |     \n");
    printf("        %c  |  %c  |  %c  \n", gameboard[4], gameboard[5], gameboard[6]);
    printf("      _____|_____|_____\n");
    printf("           |     |     \n");
    printf("        %c  |  %c  |  %c  \n", gameboard[7], gameboard[8], gameboard[9]);
    printf("           |     |     \n");
    printf("\n");
};

/**
 * Takes a gameboard and an int representing the current player
 * Prompts for a position, performs error checking, and then
 * updates the string passed in. It feels wrong to me to manipulate the
 * string passed in, but I don't yet know how to properly clean up
 * allocated memory. Once I figure this out, I would like to make this
 * a "pure function"
 **/
void markboard(char gameboard[], int currentPlayer)
{
    int positionSelected = 0;
    while (positionSelected == 0)
    {
        printf("Player %d, enter a number\n", currentPlayer);
        scanf("%d", &positionSelected);
        if (positionSelected < 1 ||
            positionSelected > 9)
        {
            positionSelected = 0;
            printf("That position is invalid. Choose a position from 1 to 9!\n");
            getchar();
        }
        if (
            gameboard[positionSelected] == 'X' ||
            gameboard[positionSelected] == 'O')
        {
            positionSelected = 0;
            printf("That position is already taken. Choose again!");
            getchar();
        }
    }
    gameboard[positionSelected] = (currentPlayer == 1 ? 'X' : 'O');
};

/**
 * Checks the gameboard for winning positions or if the board is full
 * This can be made more DRY by refactoring the redundant state checking
 * winning positions into a func
 **/
int checkForWin(char gameboard[])
{
    int result = -1;
    if ((gameboard[1] == 'X' &&
         gameboard[2] == 'X' &&
         gameboard[3] == 'X') ||
        (gameboard[4] == 'X' &&
         gameboard[5] == 'X' &&
         gameboard[6] == 'X') ||
        (gameboard[7] == 'X' &&
         gameboard[8] == 'X' &&
         gameboard[9] == 'X') ||
        (gameboard[1] == 'X' &&
         gameboard[4] == 'X' &&
         gameboard[7] == 'X') ||
        (gameboard[2] == 'X' &&
         gameboard[5] == 'X' &&
         gameboard[8] == 'X') ||
        (gameboard[3] == 'X' &&
         gameboard[6] == 'X' &&
         gameboard[9] == 'X') ||
        (gameboard[1] == 'X' &&
         gameboard[5] == 'X' &&
         gameboard[9] == 'X') ||
        (gameboard[3] == 'X' &&
         gameboard[5] == 'X' &&
         gameboard[7] == 'X'))
    {
        result = 1;
    }
    else if ((gameboard[1] == 'O' &&
              gameboard[2] == 'O' &&
              gameboard[3] == 'O') ||
             (gameboard[4] == 'O' &&
              gameboard[5] == 'O' &&
              gameboard[6] == 'O') ||
             (gameboard[7] == 'O' &&
              gameboard[8] == 'O' &&
              gameboard[9] == 'O') ||
             (gameboard[1] == 'O' &&
              gameboard[4] == 'O' &&
              gameboard[7] == 'O') ||
             (gameboard[2] == 'O' &&
              gameboard[5] == 'O' &&
              gameboard[8] == 'O') ||
             (gameboard[3] == 'O' &&
              gameboard[6] == 'O' &&
              gameboard[9] == 'O') ||
             (gameboard[1] == 'O' &&
              gameboard[5] == 'O' &&
              gameboard[9] == 'O') ||
             (gameboard[3] == 'O' &&
              gameboard[5] == 'O' &&
              gameboard[7] == 'O'))
    {
        result = 2;
    }
    else if (gameboard[1] != '1' &&
             gameboard[2] != '2' &&
             gameboard[3] != '3' &&
             gameboard[4] != '4' &&
             gameboard[5] != '5' &&
             gameboard[6] != '6' &&
             gameboard[7] != '7' &&
             gameboard[8] != '8' &&
             gameboard[9] != '9')
    {
        result = 0;
    }
    return result;
};