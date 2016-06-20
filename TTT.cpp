// TicTacToeV4.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <fstream>
#include <cstdio>

using namespace std;

//Variables
static vector<string> boardDefault = { "", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
static vector<string> Board = boardDefault;
string players[4] = { "Player1", "Player2", "Marker1", "Marker2" };
string Player1 = players[0];
string Player2 = players[1];
string Marker1 = players[2];
string Marker2 = players[3];
int colour1 = 3;
int colour2 = 12;
int colourDefault = 15;
int gameState;
int turn;
//End of Variables

bool ASC(int rangeBegin, int rangeEnd, string ASCconfirm) {
	char ASCletter = ASCconfirm.at(0);
	if (rangeBegin <= int(ASCletter) <= rangeEnd) {
		return 1;
	}
	else {
		return 0;
	}
}

void setColour(unsigned short colour)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, colour);
}

void getInfo()
{
	string info;
	ifstream playerData;
	playerData.open("pdata.txt");

	for (int i = 0; i < 4; i++) {
		getline(playerData, info);
		players[i] = info;
	}
	playerData.close();

	players[2] = players[2].at(0);
	players[3] = players[3].at(0);

}

void drawBoard()
{
	setColour(colourDefault);

	Player1 = players[0];
	Player2 = players[1];
	Marker1 = players[2];
	Marker2 = players[3];

	system("cls");

	cout << "Jared's Tic Tac Toe Game\n";

	setColour(colour1); cout << Player1;
	setColour(colourDefault); cout << " - ";
	setColour(colour1); cout << Marker1;
	setColour(colourDefault); cout << " | ";
	setColour(colour2); cout << Player2;
	setColour(colourDefault); cout << " - ";
	setColour(colour2); cout << Marker2 << endl;
	setColour(colourDefault);

	cout << "     |     |     " << endl;

	cout << "  ";
	if (Board[1] == Marker1) {
		setColour(colour1);
	}
	if (Board[1] == Marker2) {
		setColour(colour2);
	}
	cout << Board[1];
	setColour(colourDefault); cout << "  |  ";
	if (Board[2] == Marker1) {
		setColour(colour1);
	}
	if (Board[2] == Marker2) {
		setColour(colour2);
	}
	cout << Board[2];
	setColour(colourDefault); cout << "  |  ";
	if (Board[3] == Marker1) {
		setColour(colour1);
	}
	if (Board[3] == Marker2) {
		setColour(colour2);
	}
	cout << Board[3] << endl;
	setColour(colourDefault);

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  ";
	if (Board[4] == Marker1) {
		setColour(colour1);
	}
	if (Board[4] == Marker2) {
		setColour(colour2);
	}
	cout << Board[4];
	setColour(colourDefault); cout << "  |  ";
	if (Board[5] == Marker1) {
		setColour(colour1);
	}
	if (Board[5] == Marker2) {
		setColour(colour2);
	}
	cout << Board[5];
	setColour(colourDefault); cout << "  |  ";
	if (Board[6] == Marker1) {
		setColour(colour1);
	}
	if (Board[6] == Marker2) {
		setColour(colour2);
	}
	cout << Board[6] << endl;
	setColour(colourDefault);

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  ";
	if (Board[7] == Marker1) {
		setColour(colour1);
	}
	if (Board[7] == Marker2) {
		setColour(colour2);
	}
	cout << Board[7];
	setColour(colourDefault); cout << "  |  ";
	if (Board[8] == Marker1) {
		setColour(colour1);
	}
	if (Board[8] == Marker2) {
		setColour(colour2);
	}
	cout << Board[8];
	setColour(colourDefault); cout << "  |  ";
	if (Board[9] == Marker1) {
		setColour(colour1);
	}
	if (Board[9] == Marker2) {
		setColour(colour2);
	}
	cout << Board[9] << endl;
	setColour(colourDefault);

	cout << "     |     |     " << endl << endl;
}

void getSquare(bool currPlayer)
{
	string square;
	unsigned int squareNum;
	int currColour = (currPlayer == 0 ? colour1 : colour2);
	string currMark = (currPlayer == 0 ? Marker1 : Marker2);
	string currPlayerName = (currPlayer == 0 ? Player1 : Player2);

	do {
		do {
			cout << "\nWhat square would you like to play ";
			setColour(currColour); cout << currPlayerName;
			setColour(colourDefault); cout << "? ";
			cin >> square;
			if (ASC(48, 57, square)) {
				squareNum = atoi(square.c_str());
			}
		} while (squareNum > 9);
	} while ((Board[squareNum] == Marker1) | (Board[squareNum] == Marker2));

	Board[squareNum] = currMark;

}

void botSquare(bool difficulty)
{
	srand(time(NULL));
	int randomizer = 1 + (rand() % 100);
	srand((randomizer * rand()));
	int Wins[3][8] = {
		{ 1, 2, 3, 1, 4, 7, 1, 3 },
		{ 4, 5, 6, 2, 5, 8, 5, 5 },
		{ 7, 8, 9, 3, 6, 9, 9, 7 }
	};
	int oppScore = 0;
	int botScore = 0;
	int botSquare = 0;

	if (difficulty == 0) {
		do {
			int random = rand();
			botSquare = rand() % 9 + 1;
			random++;
		} while ((Board[botSquare] == Marker1) | (Board[botSquare] == Marker2));
	}

	if (difficulty == 1) {

		if ((Board[2] == Marker1) | (Board[4] == Marker1) | (Board[6] == Marker1) | (Board[8] == Marker1)) {
			if (turn == 1) {
				int random = rand() % 100 + turn;
				random = ((rand() % 4) + 1);
				switch (random) {
				case 1:
					botSquare = 1;
					break;
				case 2:
					botSquare = 3;
					break;
				case 3:
					botSquare = 7;
					break;
				case 4:
					botSquare = 9;
					break;
				}
			}
			if ((Board[5] == Marker1) && (turn == 3)) {
				int corner = 0;
				for (int i = 1; i <= 9; i++) {
					if ((Board[i] == Marker1) && (i != 5)) {
						corner = i;
					}
				}
				switch (corner) {
				case 1:
					botSquare = 7;
					break;
				case 3:
					botSquare = 9;
					break;
				case 7:
					botSquare = 1;
					break;
				case 9:
					botSquare = 3;
					break;
				}
			}
			if ((Board[5] != Marker1) && (turn == 3)) {
				botSquare = 5;
			}
		}

		if (Board[5] == Marker1) {
			if (turn == 1) {
				int random = rand() % 100 + turn;
				random = ((rand() % 4) + 1);
				switch (random)
				{
				case 1:
					botSquare = 1;
					break;
				case 2:
					botSquare = 3;
					break;
				case 3:
					botSquare = 7;
					break;
				case 4:
					botSquare = 9;
					break;
				}
			}
			if (turn == 3) {
				int corner = 0;
				for (int i = 1; i <= 9; i++) {
					if ((Board[i] == Marker1) && (i != 5)) {
						corner = i;
					}
					switch (corner) {
					case 1:
						botSquare = 3;
						break;
					case 3:
						botSquare = 1;
						break;
					case 7:
						botSquare = 9;
						break;
					case 9:
						botSquare = 7;
						break;
					}
				}
			}
		}

		if ((Board[1] == Marker1) | (Board[3] == Marker1) | (Board[7] == Marker1) | (Board[9] == Marker1)) {
			if (turn == 1) {
				botSquare = 5;
			}
			if ((turn == 3) && ((botSquare % 2) == 0) | (Board[5] == Marker2)) {
				do {
					int random = rand();
					random = (rand() % 4) + 1;
					switch (random) {
					case 1:
						botSquare = 2;
						break;
					case 2:
						botSquare = 4;
						break;
					case 3:
						botSquare = 6;
						break;
					case 4:
						botSquare = 8;
						break;
					}
				} while ((Board[botSquare] == Marker1) | (Board[botSquare] == Marker2));
			}
		}

		if ((botSquare == 0) && (turn > 3)) {
			do {
				int random = rand();
				botSquare = rand() % 9 + 1;
				random++;
			} while ((Board[botSquare] == Marker1) | (Board[botSquare] == Marker2));

		}
	}
	for (int c = 0; c < 8; c++) {
		oppScore = 0;
		botScore = 0;
		for (int r = 0; r < 3; r++)
		{
			if (Board[Wins[r][c]] == Marker1) {
				oppScore++;
				if (oppScore >= 2) {
					for (int rW = 0; rW < 3; rW++) {
						if ((Board[Wins[rW][c]] != Marker1) && (Board[Wins[rW][c]] != Marker2)) {
							botSquare = Wins[rW][c];
						}
					}
				}
			}
			if (Board[Wins[r][c]] == Marker2) {
				botScore++;
				if (botScore >= 2) {
					for (int rW = 0; rW < 3; rW++) {
						if ((Board[Wins[rW][c]] != Marker1) && (Board[Wins[rW][c]] != Marker2)) {
							botSquare = Wins[rW][c];
						}
					}
				}
			}
		}
	}
	cout << "DEBUG botSquare: " << botSquare << endl;
	Board[botSquare] = Marker2;
}

int checkWin(string currMark)
{
	int statusWin = 0;
	int statusTie = 0;
	int markCount = 0;

	int Wins[3][8] =
	{
		{ 1, 2, 3, 1, 4, 7, 1, 3 },
		{ 4, 5, 6, 2, 5, 8, 5, 5 },
		{ 7, 8, 9, 3, 6, 9, 9, 7 }
	};

	for (int c = 0; c < 8; c++)
	{
		int currMarkCount = 0;
		for (int r = 0; r < 3; r++)
		{
			if ((Board[Wins[r][c]]) == currMark)
			{
				currMarkCount++;
				if (currMarkCount == 3)
				{
					return 1;
				}
				else
				{
					statusWin = 0;
				}
			}
		}
	}

	for (int i = 1; i <= 9; i++)
	{
		if ((Board[i] == Marker1) | (Board[i] == Marker2))
		{
			markCount++;
			if (markCount == 9)
			{
				return -1;
			}
			else
			{
				statusTie = 0;
			}
		}
	}

	if ((statusWin == 0) && (statusTie == 0))
	{
		return 0;
	}

	else
	{
		return 2;
	}
}

int main()
{
	SetConsoleTitle(TEXT("Jared's TicTacToe V5.1"));
	setColour(colourDefault);

	getInfo();
	Player1 = players[0];
	Player2 = players[1];
	Marker1 = players[2];
	Marker2 = players[3];

	bool botStatus = 0;
	bool hardBotStatus = 0;
	if ((Player2 == "Bot") | (Player2 == "bot")) {
		botStatus = 1;
	}
	if ((Player2 == "HardBot") | (Player2 == "hardBot") | (Player2 == "Hardbot") | (Player2 == "hardbot") | (Player2 == "HB") | (Player2 == "Hb") | (Player2 == "hB") | (Player2 == "hb")) {
		hardBotStatus = 1;
	}

	bool currPlayer = 0;
	string currPlayerName = ((currPlayer == 0) ? Player1 : Player2);
	string currMark = ((currPlayer == 0) ? Marker1 : Marker2);
	string playStatus = "Yes";

	do {
		Board = boardDefault;
		gameState = 0;
		turn = 0;
		currPlayer = 0;
		drawBoard();
		do {
			currMark = ((currPlayer == 0) ? Marker1 : Marker2);
			currPlayerName = ((currPlayer == 0) ? Player1 : Player2);
			int currColour = (currPlayer == 0 ? colour1 : colour2);
			if ((botStatus == 0) && (hardBotStatus == 0)) {
				getSquare(currPlayer);
			}
			if ((botStatus == 1) | (hardBotStatus == 1)) {
				if (currPlayer == 0) {
					getSquare(currPlayer);
				}
				if (currPlayer == 1) {
					botSquare(hardBotStatus);
				}
			}
			drawBoard();
			gameState = checkWin(currMark);
			switch (gameState) {
			case 1:
				cout << endl;
				setColour(currColour); cout << currPlayerName;
				setColour(colourDefault); cout << " has won the match!" << endl;
				break;
			case -1:
				cout << endl << "There are no moves left, the game has ended in a tie!" << endl;
				break;
			case 2:
				cout << endl << "ERROR" << endl;
				break;
			}
			currPlayer = !currPlayer;
			turn++;
		} while (gameState == 0);

		cout << "\nWould you like to play a rematch? ( Y / N) : ";
		cin >> playStatus;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1, '\n');
		}

	} while ((playStatus == "Yes") | (playStatus == "yes") | (playStatus == "Y") | (playStatus == "y"));

	return 0;
}
