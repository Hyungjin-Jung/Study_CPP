#pragma once
#include"Snack.h"

#ifndef __CANDY_H__
#define __CANDY_H__

class Candy : public Snack
{
	string taste;
public:
	Candy(string taste);
	void show_info();
};

#endif