#pragma once
#include"Snack.h"

#ifndef __CHOCOLATE_H__
#define __CHOCOLATE_H__

class Chocolate : public Snack
{
	string shape;
public:
	Chocolate(string shape);
	void show_info();
};

#endif