#include "pch.h"
#include <iostream>
#include "string"
#include "Book.h"
#include "Shell.h"

using namespace std;

int main()
{
	Book book1("Tolstoy", "War and Piece", "Moscow", 1865, 1200),
		book2("Tolstoy", "Anna Karenina", "Moscow", 1877, 655),
		book3("Pushkin", "Onegin", "S-P", 1868, 500);
	Book arr[3] = { book1, book2, book3 };
	Shell shell;
	for (int i = 0; i < 3; i++)
		shell.extendArr(arr[i]);
	cout << shell.countAuthor("Tolstoy");
		 
}