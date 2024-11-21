#include <stdio.h>

char board[3][3];
char player = 'X';

void resetBoard() {
    // Initialize the board with numbers 1 to 9
    char cell = '1';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = cell++;
        }
    }
}

void printBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---+---+---\n");
    }
    printf("\n");
}

int isDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return 0;
            }
        }
    }
    return 1;
}

int checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return 1;
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return 1;
    
    return 0;
}

void switchPlayer() {
    player = (player == 'X') ? 'O' : 'X';
}

int isValidMove(int cell) {
    int row = (cell - 1) / 3;
    int col = (cell - 1) % 3;
    return (cell >= 1 && cell <= 9 && board[row][col] != 'X' && board[row][col] != 'O');
}

void makeMove(int cell) {
    int row = (cell - 1) / 3;
    int col = (cell - 1) % 3;
    board[row][col] = player;
}

int main() {
    int cell;
    resetBoard();
    
    while (1) {
        printBoard();
        printf("Player %c, enter the cell number (1-9) where you want to place your mark: ", player);
        scanf("%d", &cell);
        
        if (isValidMove(cell)) {
            makeMove(cell);
            if (checkWin()) {
                printBoard();
                printf("Player %c wins!\n", player);
                break;
            }
            if (isDraw()) {
                printBoard();
                printf("It's a draw!\n");
                break;
            }
            switchPlayer();
        } else {
            printf("Invalid move. Try again.\n");
        }
    }
    return 0;
}
