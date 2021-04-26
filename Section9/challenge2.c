#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void markBoard(int, char*);
bool checkSelection(int, char*);
int checkForWin(char*);
void displayBoard(char*);

int main(){
    int player = 1;
    char board[10] = {'0','1','2','3','4','5','6','7','8','9'};

    
    int gameResult = -1;

    do{
        displayBoard(board);

        player = (player%2 == 0) ? 2 : 1;
        markBoard(player,board);
        gameResult = checkForWin(board);
        player++;
    }while(gameResult == -1);

    displayBoard(board);
    if(gameResult == 1)
        printf("==>\aPlayer %d win\n", --player);
    else
        printf("==>\aGame draw\n");

    return 0;
}

bool checkSelection(int sel, char* board){
    if(sel < 1 || sel > 9 || board[sel] == 'x' || board[sel] == 'o'){
        printf("Invalid move\n");
        return false;
    }
    return true;   
}

void markBoard(int player,char* board){
    int selection = 0;
    do{
        printf("Player %d, enter a number: ",player);
        scanf("%d",&selection);
    }while(!checkSelection(selection, board));
    
    if(player == 1)
        board[selection] = 'x';
    else if(player == 2)
        board[selection] = 'o';
    else{
        printf("Error number of player\n");
    }
}

//0 Gave over no winner
//-1 game in progress
//1 game over there is a winner
int checkForWin(char* board){
    int returnValue = 0;
    if(board[1] == board[2] && board[2] == board[3])
        returnValue = 1;
    if(board[4] == board[5] && board[5] == board[6])
        returnValue = 1;
    if(board[7] == board[8] && board[8] == board[9])
        returnValue = 1;
    
    if(board[1] == board[4] && board[4] == board[7])
        returnValue = 1;
    if(board[2] == board[5] && board[5] == board[8])
        returnValue = 1;
    if(board[3] == board[6] && board[6] == board[9])
        returnValue = 1;

    if(board[1] == board[5] && board[5] == board[9])
        returnValue = 1;
    if(board[3] == board[5] && board[5] == board[7])
        returnValue = 1;

    if(returnValue == 0){
        for(int i = 1; i<10; i++){
            if(board[i] != 'o' && board[i] != 'x')
                returnValue = -1;
        }
    }
    
    return returnValue;
}

/*******************************************************************
FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
 *******************************************************************/
void displayBoard(char* board)
{
    system("clear");

    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", board[1], board[2], board[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", board[4], board[5], board[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", board[7], board[8], board[9]);

    printf("     |     |     \n\n");
}