#include"Snack.h"

int Snack::count = 0;

Snack::Snack()
{
	count++;
}
void Snack::show_info()
{
	cout << name << endl;
}
int Snack::get_count()
{
	return count;
}