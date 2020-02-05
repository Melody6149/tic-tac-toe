// tic tac toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

char board[3][3]; // used to store characters in the board
int input; // used to store character typed on numpad
bool gameover;
char player = 'X'; // player is used for multiple things it is used to know whose turn it is.
//It is also used to make sure the right leter is placed and if the player wins with the letter they placed.
bool validinput; // used to see if input is valid and to know when to switch whose turn it is
void start() //sets all spaces on the board to blank characters
{
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			board[x][y] = ' ';
		}
	}
}
//used to display the game
void displayboard()
{
	system("cls");
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			cout <<"[" << board[x][y] << "]";
			if (y == 2)
			{
				cout << endl;
			}
		}
	}
}
//used to check if a player won
void checkwin()
{
	
	if (board[2][0] == player & board[2][1] == player & board[2][2] == player) // checks if matching leters on on the bottom row
	{
		gameover = true;
		cout << "player " << player << " wins!";
	}
	if (board[0][0] == player & board[0][1] == player & board[0][2] == player) // checks if matching leters are in the top row
	{
		gameover = true;
		cout << "player " << player << " wins!";
	}
	if (board[1][0] == player & board[1][1] == player & board[1][2] == player) // used to see if there is a win on the middle row
	{
		gameover = true;
		cout << "player " << player << " wins!";
	}
	if (board[0][0] == player & board[1][0] == player & board[2][0] == player) // used to check for win in left column
	{
		gameover = true;
		cout << "player " << player << " wins!";
	}
	if (board[0][1] == player & board[1][1] == player & board[2][1] == player) //used to check for win in midle colume
	{
		gameover = true;
		cout << "player " << player << " wins!";
	}
	if (board[0][2] == player & board[1][2] == player & board[2][2] == player) //used to check right column
	{
		gameover = true;
		cout << "player " << player << " wins!";
	}
	if (board[0][0] == player & board[1][1] == player & board[2][2] == player) 
	{
		gameover = true;
		cout << "player " << player << " wins!";
	}
	if (board[0][2] == player & board[1][1] == player & board[2][0] == player) 
	{
		gameover = true;
		cout << "player " << player << " wins!";
	}
	if (board[0][0] != ' ' & board[0][1] != ' ' & board[0][2] != ' ' & board[1][0] != ' ' & board[1][1] != ' '
		& board[1][2] != ' ' & board[2][0] != ' ' & board[2][1] != ' ' & board[2][2] != ' ' & !gameover) // checks to if game is imposible to win
	{
		gameover = true;
		cout << "Nobody wins.";
	}
	if (gameover == true) 
	{
		cout << endl;
		system("pause");
	}
}

int main()
{
	cout << "Welcome to tic tac toe" << endl << "player turns will be show by if the console says player x or player y's turn" << endl << endl;
	cout << "Press 'Enter' to contiue.";
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
	cin.get();
	system("cls");
	start();

	displayboard();
	while (!gameover)
	{
		
		if (validinput == true & player == 'X') //used to make sure there is valid input before making it o's turn
		{
			player = 'O';
			validinput = false;
		}
		if (validinput == true & player == 'O') //used to make sure there is valid input before making it x's turn
		{
			player = 'X';
			validinput = false;
		}
		
		
		cout << "Player" << player << "'s turn.";
		cout << "use the numpad to pick where to put the " << player << endl;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		cin >> input;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
		}
		switch (input) //puts player token if space is blank.
		{
		case 1:
			if (board[2][0] == ' ') 
			{
				board[2][0] = player;
				validinput = true;
			}
			break;
		case 2:
			if (board[2][1] == ' ')
			{
				board[2][1] = player;
				validinput = true;
			}
			break;
		case 3:
			if (board[2][2] == ' ')
			{
				board[2][2] = player;
				validinput = true;
			}
			break;
		case 4:
			if (board[1][0] == ' ')
			{
				board[1][0] = player;
				validinput = true;
			}
			break;
		case 5:
			if (board[1][1] == ' ')
			{
				board[1][1] = player;
				validinput = true;
			}
			break;
		case 6:
			if (board[1][2] == ' ')
			{
				board[1][2] = player;
				validinput = true;
			}
			break;
		case 7:
			if (board[0][0] == ' ')
			{
				board[0][0] = player;
				validinput = true;
			}
			break;
		case 8:
			if (board[0][1] == ' ')
			{
				board[0][1] = player;
				validinput = true;
			}
			break;
		case 9:
			if (board[0][2] == ' ')
			{
				board[0][2] = player;
				validinput = true;
			}
			break;
		default:
			validinput = false;
		}
		
		displayboard();
		
		checkwin();
	}

}
