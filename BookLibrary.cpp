#include <iostream>
#include "Books.h"

using namespace std;

int main() 
{
	while (true) 
	{
		cout << "Choose a option" << endl;
		cout << "1: Add book" << endl;
		cout << "2: List all books" << endl;
		cout << "3: Check out book" << endl;
		cout << "4: Check in book" << endl;
		cout << "0: Exit Program" << endl;

		int i;
		cin >> i;

		switch (i)
		{
		default:
			cout << "Invalid Selection : Try Again" << endl;
			break;
		}
	}
}