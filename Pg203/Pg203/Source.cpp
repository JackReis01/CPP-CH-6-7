#include <iostream>
#include <string>
using namespace std;
double currency(string Exch, int Mon)
{
	double Curren;
	if (Exch == "Canadian")
	{
		Curren = Mon * .9813;
	}
	if (Exch == "Euro")
	{
		Curren = Mon * .757;
	}
	if (Exch == "Indian")
	{
		Curren = Mon * 52.53;
	}
	if (Exch == "Japanese")
	{
		Curren = Mon * 80.92;
	}
	if (Exch == "Mexican")
	{
		Curren = Mon * 13.1544;
	}
	if (Exch == "African")
	{
		Curren = Mon * 7.7522;

	}
	if (Exch == "British")
	{
		Curren = Mon * .6178;
	}


	return Curren;
}

int main()
{
	string Exch;
	double z;
	int Curr;
	cout << "______________________________________" << endl;
	cout << "| Canadian Dollar        .9813       |" << endl;
	cout << "| Euro                   .757        |" << endl;
	cout << "| Indian Rupee           52.53       |" << endl;
	cout << "| Japanese Yen           80.92       |" << endl;
	cout << "| Mexican Peso           13.1544     |" << endl;
	cout << "| South African Rand     7.7522      |" << endl;
	cout << "| British Pound          .6178       |" << endl;
	cout << "|____________________________________|" << endl;

	cout << "What would you like to convert to?\n";
	cin >> Exch;
	cout << "How many dollars do you have?\n";
	cin >> Curr;

	z = currency(Exch, Curr);

	cout << "You have $" << Curr << " dollars and it will convert to " << z << " " << Exch << endl;

	system("pause");
	return 0;
}