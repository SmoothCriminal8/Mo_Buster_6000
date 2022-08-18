#pragma once
#include "Simple.h"
#include "Simple_Array.h"


class Entity : protected Simple
{
public:
	Entity(char _icon, string _name, int _coord_x, int _coord_y, Simple_Array* _simple_array, int _color  = 7);
	Entity(char _icon, string _name, int _coord_x, int _coord_y, Simple_Array* _simple_array, bool _walkable, bool _breakable, bool _moveable, bool _pushable, int _color = 7);
private:
	Simple_Array* simple_array;
};

