//Creating a simple Tic Tac Toe game in C++ involves several steps. Below is a basic implementation of Tic Tac Toe 
//that you can use as a starting point. This version of the game is for two players and played in the console.
#include <iostream>
using namespace std;

// Function to print the Tic Tac Toe board
void printBoard(char board[3][3]) {
    cout << "-------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl;
        cout << "-------------" << endl;
    }
}

// Function to check if a player has won
bool checkWin(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;
    return false;
}

// Function to check if the game is a draw
bool checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

int main() {
    char board[3][3] = { { ' ', ' ', ' ' }, { ' ', ' ', ' ' }, { ' ', ' ', ' ' } };
    char currentPlayer = 'X';
    bool gameover = false;

    while (!gameover) {
        printBoard(board);
        int row, col;

        // Get player's move
        cout << "Player " << currentPlayer << ", enter row and column (0-2): ";
        cin >> row >> col;

        // Check if the move is valid
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        // Update the board with the player's move
        board[row][col] = currentPlayer;

        // Check if the current player has won
        if (checkWin(board, currentPlayer)) {
            printBoard(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            gameover = true;
        }
        // Check if it's a draw
        else if (checkDraw(board)) {
            printBoard(board);
            cout << "It's a draw!" << endl;
            gameover = true;
        }

        // Switch players
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
//This code initializes a 3x3 grid for the Tic Tac Toe board, takes input from two players to make moves, 
//and checks for a win or draw after each move. Players take turns, and the game continues until there is a winner or a draw.
