#include <iostream>
#include <string>
#include <random>
using namespace std;

int main()
{


		string user, secondary;
		int rando;
		rando = rand() % 10 + 1;
		cout << "Think of a number between 1 and 10." << endl;
		do
		{
			cout << "Is this your number? " << rando << endl;
			cin >> user;
			if (user == "No" || user == "no")
			{

				cout << "Is your number higher or lower?" << endl;
				cin >> secondary;
				if (secondary == "Lower" || secondary == "lower")
				{
					rando--;
				}
				if (secondary == "Higher" || secondary == "higher")
				{
					rando++;
				}
			}
		} while (user == "No" || user == "no");
		if (user == "Yes" || user == "yes")
		{
			cout << "Thank you for playing." << endl;
		}
	system("pause");
	return 0;
}