#include "pch.h"
#include <iostream>
#include "string"
#include "Book.h"

using namespace std;

int main()
{
	Book book("Tolstoy", "War and Piece", "Moscow", 1865, 1200);
	book.INFO();
}