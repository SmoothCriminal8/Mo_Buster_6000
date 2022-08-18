#pragma once
#include <iostream>

using namespace std;
class Simple {
public:

	Simple(char _icon, string _name, int _coord_x, int _coord_y, int _color = 7);

	Simple(char _icon, string _name, int _coord_x, int _coord_y, bool _walkable, bool _breakable, bool _moveable, bool _pushable, int _color = 7);
	bool getMoveable();
	bool getPushable();
	bool getBreakable();
	bool getWalkable();
	char getIcon();
	void passiveTrigger();
	void booleanTrigger();
	void afterTrigger();
	

protected:
	char icon;
	int color;
	string name, class_name = "Simple";
	int coord_x, coord_y;
	bool walkable, breakable, moveable, pushable;
};

