#include <iostream>
#include <string>
using namespace std;

int main()
{
	int rando, user;
	string play;
	do
	{
		rando = rand() % 10 + 1;         // rando in the range 1 to 10
		cout << "Please guess between 1 and 10." << endl;
		cin >> user;
		if (user == rando)
		{
			cout << "You win!" << endl;
		}
		else
		{
			cout << "You lose!" << endl;
		}
		cout << "would you like to play again?" << endl;
		cin >> play;
	} while (play == "Yes" || play == "yes");
	system("pause");
	return 0;
}
