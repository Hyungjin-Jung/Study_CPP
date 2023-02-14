#pragma once
#include<iostream>
using namespace std;

#ifndef __SNACK_H__
#define __SNACK_H__

class Snack
{
protected:
	string name;
	static int count;
public:
	Snack();
	virtual void show_info();
	static int get_count();
};
#endif