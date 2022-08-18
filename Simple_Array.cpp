#include "Simple_Array.h"
#include "Simple_Factory.h"
#include <malloc.h>
Simple_Array::Simple_Array(char* _char_array, int _size_x, int _size_y) {
	size_x = _size_x;
	size_y = _size_y;
	simple_array = (Simple**)malloc(sizeof(Simple*) * size_x * size_y);
	//Allocates a block memory using the size of "Simple*"
	for (int i = 0; i < size_y; i++) {
		for (int j = 0; j < size_x; j++) {
			*(simple_array + (i * size_x) + j) = Simple_Factory().createObject(*(_char_array + (i * size_x + j)), j, i, 'A');
		}
	}
}

Simple_Array::~Simple_Array() {
	for (int i = 0; i < size_y; i++) {
		for (int j = 0; j < size_x; j++) {
			if ((simple_array + (i * size_x) + j) != NULL) {
				delete (*(simple_array + (i * size_x) + j));
			}
		}
	}
	free(simple_array);
}
void Simple_Array::placeObject(Simple* _object, int _coord_x, int _coord_y) {
	*(simple_array + (_coord_y * size_x) + _coord_x) = _object;
}


void Simple_Array::printArray() {
	for (int i = 0; i < size_y; i++) {
		for (int j = 0; j < size_x; j++) {
			if (*(simple_array + (i * size_x) + j) != NULL)
				cout << (*(simple_array + (i * size_x) + j))->getIcon();
			else cout << " ";
		}
		cout << "\n";
	}
	
}

bool Simple_Array::moveObject(int _coord_x, int _coord_y, int _amount_x, int _amount_y) {
	if (*(simple_array + (_coord_y * size_x) + _coord_x) != NULL && (*(simple_array + (_coord_y * size_x) + _coord_x))->getMoveable())
	{
		if (_coord_x < 0) return false;
		if (_coord_y < 0) return false;
		if (_coord_x + _amount_x < 0) return false;
		if (_coord_y + _amount_y < 0) return false;
		if (_coord_x + _amount_x >= size_x) return false;
		if (_coord_y + _amount_y >= size_y) return false;

		if (_amount_x > 0) {
			for (int i = 0; i < _amount_x; i++) {
				if (!(*(simple_array + ((_coord_y + i) * size_x) + _coord_x) != NULL || !(*(simple_array)+((_coord_y + i) * size_x) + _coord_x)->getWalkable())) return false;
			}
		}
		else {
			for (int i = 0; i > _amount_x; i--) {
				if (!(*(simple_array + ((_coord_y + i) * size_x) + _coord_x) != NULL || !(*(simple_array)+((_coord_y + i) * size_x) + _coord_x)->getWalkable())) return false;
			}
		}

		if (_amount_y > 0) {
			for (int i = 0; i < _amount_y; i++) {
				if (!(*(simple_array + ((_coord_y + i) * size_x) + _coord_x) != NULL || !(*(simple_array)+((_coord_y + i) * size_x) + _coord_x)->getWalkable())) return false;
			}
		}
		else {
			for (int i = 0; i > _amount_y; i--) {
				if (!(*(simple_array + ((_coord_y + i) * size_x) + _coord_x) != NULL || !(*(simple_array)+((_coord_y + i) * size_x) + _coord_x)->getWalkable())) return false;
			}
		}

		if ((*(simple_array + ((_coord_y + _amount_y) * size_x) + (_coord_x + _amount_x)) == NULL || (*(simple_array + ((_coord_y + _amount_y) * size_x) + (_coord_x + _amount_x)))->getWalkable())) {
			*(simple_array + ((_coord_y + _amount_y) * size_x) + (_coord_x + _amount_x)) = *(simple_array + (_coord_y * size_x) + _coord_x);
			*(simple_array + (_coord_y * size_x) + _coord_x) = NULL;
			return true;
		}
		else return false;
	}
}