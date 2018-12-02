
#include "classe_triangle.h"
#include <iostream>
#include <fstream>
using namespace std;

Triangle::Triangle( const char* name )
{
	ifstream fichier(name);
	fichier >> this->size;

	this->points = new int*[this->size];
	for (int i = 0; i < this->size; ++i)
	{
		this->points[i] = new int[3];
		fichier >> this->points[i][0] >> this->points[i][1] >> this->points[i][2];
	}  

	fichier.close();
}

Triangle::~Triangle() 
{
	cout << "destructeur de triangle : " << this->points << endl;
	for (int i = 0; i < this->size; ++i)
	{
		delete[] this->points[i];
	}
	delete[] this->points;
}

void Triangle::affiche()
{
	cout << "size : " << this->size << endl;
	for (int i = 0; i < this->size; ++i)
	{
		cout << this->points[i][0] << " " << this->points[i][1] << " " << this->points[i][2] << endl;
	}
}

