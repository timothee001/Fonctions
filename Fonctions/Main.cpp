
#define WINDOWS_LEAN_AND_MEAN
#include <windows.h>
#include <iostream>

int composant1(int p1, int p2)
{
	return p1+p2;
}

int composant2(int p1, int p2)
{
	return p1*p2;
}

int main(int argc, char * argv)
{
	int data1=326;
	int data2=50;

	int valeur1;
	int valeur2;

	valeur1=composant1(data1,data2);

	valeur2=composant2(data1,data2);

	std::cout << "valeur 1 :" << valeur1 << " valeur 2 :" << valeur2 << std::endl;
	Sleep(1000);
}