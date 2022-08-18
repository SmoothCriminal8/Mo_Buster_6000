#include "Simple.h"


Simple::Simple(char _icon, string _name, int _coord_x, int _coord_y, int _color) {
	class_name = "Simple";
	coord_x = 0;
	coord_y = 0;
	icon = _icon;
	name = _name;
	color = _color;
};

Simple::Simple(char _icon, string _name, int _coord_x, int _coord_y, bool _walkable, bool _breakable, bool _moveable, bool _pushable, int _color) {
	class_name = "Simple";
	coord_x = _coord_x;
	coord_y = _coord_y;
	icon = _icon;
	name = _name;
	color = _color;
	walkable = _walkable;
	breakable = _breakable;
	moveable = _moveable;
	pushable = _pushable;
};

bool Simple::getMoveable() {
	return moveable;
}
bool Simple::getPushable() {
	return pushable;
}
bool Simple::getBreakable() {
	return breakable;
}
bool Simple::getWalkable(){
	return walkable;
}
char Simple::getIcon() {
	return icon;
}