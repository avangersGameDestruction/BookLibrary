#pragma once
#include "Books.h"
#include <vector>

using namespace std;

class inventory
{
public:
	// vector array for Books | vector array للكتب
	vector<Books> b;

	// void functions for adding removing and checking | وظائف باطلة لإضافة الإزالة والتحقق
	void AddBook(Books book);
	void RemoveBooks(Books book);
	void CheckOutBooks(Books book);
	void CheckInBooks(Books book);

	// functions for finding book by title | وظائف للعثور على الكتاب بالعنوان
	Books BookTitleFinder(string t);
};

