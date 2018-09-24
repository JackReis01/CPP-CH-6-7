#include <iostream>
using namespace std;

int main()
{
	int id;
	string result;

	cout << "Please enter an id." << endl;
	cin >> id;
	switch (id)
	{
	case 102094:
		result = "Logan Dewilfond\n";
		break;
	case 138082:
		result = "Jack Reis\n";
		break;
	case 154824:
		result = "Kaden Graap\n";
		break;
	case 313011:
		result = "Aaron Lang\n";
		break;
	case 137428:
		result = "Mason Hancock\n";
		break;
	case 137220:
		result = "Adam Gib\n";
		break;
	case 145844:
		result = "Michael France\n";
		break;
	case 306632:
		result = "Evan Raker\n";
		break;
	case 154827:
		result = "Austin Leu\n";
		break;
	case 155706:
		result = "Joey Chalupa\n";
		break;
	case 134125:
		result = "Jimmy Pham\n";
		break;
	case 318682:
		result = "Jacob Grady\n";
		break;
	case 155980:
		result = "Chayton Lofgren\n";
		break;
	case 137292:
		result = "Brandon Richards\n";
		break;
	case 137112:
		result = "Adam Burton\n";
		break;

	default:
		result = "Not Valid\n";
	}
	cout << result;

	system("pause");
	return 0;
}