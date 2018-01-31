#include <iostream>
#include <iomanip>
#include <ctime>
#include <windows.h>
using namespace std;
void Rectangle(int wigth, int height, char sym)
{                                    // формальні
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < wigth; j++)
			cout << sym;
		cout << endl;
	}
}
void main()
{
	Rectangle(5, 2, 219);
	system("pause");
}

