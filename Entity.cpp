#include "Entity.h"

Entity::Entity(char _icon, string _name, int _coord_x, int _coord_y, Simple_Array* _simple_array, int _color) : Simple(_icon, _name, _coord_x, _coord_y, _color) {
	simple_array = _simple_array;
}


Entity::Entity(char _icon, string _name, int _coord_x, int _coord_y, Simple_Array* _simple_array, bool _walkable, bool _breakable, bool _moveable, bool _pushable, int _color) : Simple(_icon, _name, _coord_x, _coord_y, _walkable, _breakable, _moveable, _color) {
	simple_array = _simple_array;
}