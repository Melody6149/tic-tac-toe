// tic tac toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

char board[3][3]; // 2d aray used for board
char input; // used to store character typed on nupad
bool gameover; // used to end while loop
char player = 'X'; // player is used for multiple things it is used to know whose turn it is. It is also used to make sure the right leter is placed and if the player wins with the leter they placed.
bool validinput; // used to see if input is valid and to know when to switch whose turn it is
void start()
{
	
	/*
	positions for numkeys where they place letter on array.
	1 = 2 0
	2 = 2 1
	3 = 2 2
	4 = 1 0
	5 = 1 1
	6 = 1 2
	7 = 0 0
	8 = 0 1
	9 = 0 2

	*/
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
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			cout << board[x][y];
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
	//uses player so it only checks for win with the leter of the player who just did there turn
	if (board[2][0] == player & board[2][1] == player & board[2][2] == player) // checks if matching leters on on the botom row
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
	if (board[0][0] == player & board[1][0] == player & board[2][0] == player) // used to check for win in left colum
	{
		gameover = true;
		cout << "player " << player << " wins!";
	}
	if (board[0][1] == player & board[1][1] == player & board[2][1] == player) //used to check for win in midle colume
	{
		gameover = true;
		cout << "player " << player << " wins!";
	}
	if (board[0][2] == player & board[1][2] == player & board[2][2] == player)
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
	else if (board[0][0] != ' ' & board[0][1] != ' ' & board[0][2] != ' ' & board[1][0] != ' ' & board[1][1] != ' '
		& board[1][2] != ' ' & board[2][0] != ' ' & board[2][1] != ' ' & board[2][2] != ' ') // checks to if game is imposible to win
	{
		gameover == true;
		cout << "Nobody wins.";
	}
	if (gameover == true)
	{
		cout << "Press 'enter' to contiue.";
		cin.get();
	}
}

int main()
{
	cout << "welcome to tic tac toe" << endl << "player turns will be show by if the console says player x or player y's turn" << endl << endl;
	cout << "Press 'Enter' to contiue.";
	cin.get();
	system("cls");
	start();
	cin.clear();
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
		displayboard();
		cout << "Player" << player << "'s turn.";
		cout << "use the numpad to pick where to put the" << player << endl;
		// player x's turn;
		cin >> input;
		switch (input) // used to put  a x or a o depending on which key the player picks on the numpad
		{
		case '1':
			if (board[2][0] == ' ') // all of the if statments are used to make sure you cant place a leter where there is already a letter. It also keeps the turn from switching.
			{
				board[2][0] = player;
				validinput = true;
			}
			break;
		case '2':
			if (board[2][1] == ' ')
			{
				board[2][1] = player;
				validinput = true;
			}
			break;
		case '3':
			if (board[2][2] == ' ')
			{
				board[2][2] = player;
				validinput = true;
			}
			break;
		case '4':
			if (board[1][0] == ' ')
			{
				board[1][0] = player;
				validinput = true;
			}
			break;
		case '5':
			if (board[1][1] == ' ')
			{
				board[1][1] = player;
				validinput = true;
			}
			break;
		case '6':
			if (board[1][2] == ' ')
			{
				board[1][2] = player;
				validinput = true;
			}
			break;
		case '7':
			if (board[0][0] == ' ')
			{
				board[0][0] = player;
				validinput = true;
			}
			break;
		case '8':
			if (board[0][1] == ' ')
			{
				board[0][1] = player;
				validinput = true;
			}
			break;
		case '9':
			if (board[0][2] == ' ')
			{
				board[0][2] = player;
				validinput = true;
			}
			break;
		default:
			validinput = false;
		}
		input = ' ';
		checkwin();
		system("cls");

	}

}
