#include <iostream>
#include "Books.h"

using namespace std;

int main()
{
    Books ownbook(1, "example", "example");
    cout << ownbook.Title << endl;
}