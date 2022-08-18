#pragma once
#include "Simple.h"
#include "Extra_Functions.h"
#include <malloc.h>
class Simple_Array
{
public:
	// *(simple_array + (_coord_y * size_x) + _coord_x) Locates by moving that much times to the right
	Simple_Array(char* _char_array, int _size_x, int _size_y);
	~Simple_Array();
	void placeObject(Simple* _object, int _coord_x, int _coord_y);
	void printArray();
	bool moveObject(int _coord_x, int _coord_y, int _amount_x, int _amount_y);
	int size_x, size_y;
	Simple** simple_array;
private:
};

