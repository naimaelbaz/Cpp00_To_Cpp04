#include <iostream>
#include <vector>


bool compar1(int i, int j)
{
	return i < j;
}

bool compar2(int i, int j)
{
	return j < i;
}

void sort(int *tab, bool(*func)(int, int))
{
	if(!func(tab[0], tab[1]))
		std::swap(tab[0], tab[1]);
}

void print(int a, int b)
{
	std::cout<< a << " " << b << "\n";
}

int main()
{
	int tab[2] = {45,4};
	sort(tab, compar1);
	print(tab[0], tab[1]);
	sort(tab, compar2);
	print(tab[0], tab[1]);
}