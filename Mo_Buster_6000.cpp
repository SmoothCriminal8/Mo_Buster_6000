#include <iostream>
#include "Simple_Array.h"

using namespace std;
int main()
{
	char map[10][10] = {
		{'1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
		{'1', ' ', '1', '1', '1', '1', '1', '1', '1', '1'},
		{'1', ' ', '1', '1', '1', '1', '1', '1', '1', '1'},
		{'1', '1', ' ', '1', '1', '1', '1', '1', '1', '1'},
		{'1', '1', ' ', '1', '1', '1', '1', '1', '1', '1'},
		{'1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
		{'1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
		{'1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
		{'1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
		{'1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
	};
	Simple_Array a((char*)map, 10, 10);
	a.printArray();
}
