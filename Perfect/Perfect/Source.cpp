#include <iostream>
using namespace std;

int main()
{
	int one, two, three;
	for (int i = 0; i <= 1000; i++)
	{
		one = i % 1;
		two = i % 2;
		three = i % 3;
		if (one == 0 && two == 0 && three == 0)
		{
			if (i <= 12)
			{
				cout << i << endl;
			}
		}
	}

	system("pause");
	return 0;

}