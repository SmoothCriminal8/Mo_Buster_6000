#pragma once
#include <iostream>
#include "Simple_Array.h"

using namespace std;


class Simple_Factory
{
public:
	static Simple* createObject(char _class_type, int _coord_x, int _coord_y, char _icon = ' ', string _name = "", int _color = 0);
};

