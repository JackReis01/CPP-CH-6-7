#include <iostream>
#include <string>
using namespace std;
int special()
{
	cout << "welcome to the special part of the game... you must be cool or something" << endl;

	return 0;
}

int main()
{
	int rando, user, score=0;
	string play, name;
	cout << "Please input a name." << endl;
	cin >> name;
	if (name == "King Supreme")
	{
		special();

	}
	if (name != "King Supreme")
	{

		rando = rand() % 100 + 1;         // rando in the range 1 to 100
		do
		{
			cout << "Please guess between 1 and 100." << endl;
			cin >> user;
			if (user < rando)
			{
				cout << "You guessed to low." << endl;
			}
			if (user > rando)
			{
				cout << "You guessed to high." << endl;
			}
			if (user == rando)
			{
				cout << "You guessed correctly!" << endl;
				score = score + 5;
			}
			score++;
		} while (score <= 5);
	}
	
	system("pause");
	return 0;
}
