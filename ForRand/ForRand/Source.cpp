#include <iostream>
#include <string>
#include <time.h>  
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << "This is number " << i << endl;
		system("pause");
		int rando;
		srand(time(NULL));
		rando = rand() % 10 + 1;
		cout << rando << endl;;
	}


	system("pause");
	return 0;
}