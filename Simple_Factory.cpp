#include "Simple_Factory.h"
#include "Entity.h"

Simple* Simple_Factory::createObject(char _class_type, int _coord_x, int _coord_y, char _icon, string _name, int _color) {
	if (_class_type == '1') {
		return new Simple(_icon, _name, _coord_x, _coord_y, _color);
	}	
	else return NULL;
}