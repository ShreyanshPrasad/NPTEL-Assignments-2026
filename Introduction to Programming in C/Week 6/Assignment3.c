#include <stdio.h>

char findWinner(char board[3][3])
{
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] &&
            board[i][1] == board[i][2]) {
            return board[i][0];
        }
    }

    // Check columns
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == board[1][j] &&
            board[1][j] == board[2][j]) {
            return board[0][j];
        }
    }

    // Check main diagonal
    if (board[0][0] == board[1][1] &&
        board[1][1] == board[2][2]) {
        return board[0][0];
    }

    // Check secondary diagonal
    if (board[0][2] == board[1][1] &&
        board[1][1] == board[2][0]) {
        return board[0][2];
    }

    // No winner
    return 'N';
}

int main()
{
    char board[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf(" %c", &board[i][j]);

    char winner = findWinner(board);

    if (winner == 'X')
        printf("Player X wins");
    else if (winner == 'O')
        printf("Player O wins");
    else
        printf("No winner");

    return 0;
}