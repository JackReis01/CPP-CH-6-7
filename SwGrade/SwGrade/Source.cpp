#include <iostream>
#include <string>
using namespace std;

int main()
{
	char grad;
	string result;

	cout << "We are going to tell you what kind of student you are." << endl;
	cout << "Enter your letter grade." << endl;
	cin >> grad;
	grad = toupper(grad);
	switch (grad)
	{
	case 'A':
		result = "Excellent\n";
		break;
	case 'B':
		result = "You're just short of great.\n";
		break;
	case 'C':
		result = "You're not very good.\n";
		break;
	case 'D':
	case 'F':
		result = "Mcdonalds is always looking for help.\n";
		break;
	default:
		result = "Not Valid\n";
	}
	cout << result;
	system("pause");
	return 0;
}