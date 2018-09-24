#include <iostream>
#include <string>
#include <time.h>  
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	string play;
	int rando, user, score=0, scorec=0;
	do
	{
		// 2>1 1>3 3>2
		srand(time(NULL));
		rando = rand() % 3 + 1;
		cout << "Pick 1. Rock 2. Paper 3. Scissors" << endl;
		cin >> user;
		if (user == rando)
		{
			cout << "You tied" << endl;
		}
		if (user == 1&& rando == 2)
		{
			cout << "The computer picked Paper" << endl;
			cout << "You lose!" << endl;
			scorec++;
		}
		if (user == 1 && rando == 3)
		{
			cout << "The computer picked Scissors" << endl;
			cout << "You win!" << endl;
			score++;
		}
		if (user == 2 && rando == 1)
		{
			cout << "The computer picked Rock" << endl;
			cout << "You win!" << endl;
			score++;
		}
		if (user == 2 && rando == 3)
		{
			cout << "The computer picked Scissors" << endl;
			cout << "You lose!" << endl;
			scorec++;
		}
		if (user == 3 && rando == 1)
		{
			cout << "The computer picked Rock" << endl;
			cout << "You lose!" << endl;
			scorec++;
		}
		if (user == 3 && rando == 2)
		{
			cout << "The computer picked Paper" << endl;
			cout << "You win!" << endl;
			score++;
		}
		cout << "You have " << score << " point(s) and the computer has " << scorec << " point(s).\n";
		cout << "Would you like to play again?" << endl;
		cin >> play;
	} while (play == "Yes"|| play == "yes");

	system("pause");
	return 0;
}