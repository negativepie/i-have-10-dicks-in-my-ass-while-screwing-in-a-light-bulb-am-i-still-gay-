#ifndef HUNTER_H
#define HUNTER_H

#include "hunter.h"

class hunter :public animal{
public:
	hunter();
	hunter(std::string n,int v);
	void set_kills(int kill);
	int get_kills();
	std::string get_name();
private:
	int kills;
	static int nextID;

};

#endif