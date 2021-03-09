using namespace std;
#pragma once
#include <iostream>
class Books
{
public:
	int ID;
	string Title;
	string Author;
	bool CheckingOut;
	Books(int id, string title, string author);
};

