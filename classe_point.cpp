
#include "classe_point.h"
#include <iostream>
#include <fstream>
using namespace std;

/////////////////////////////////////////////// FONCTION POINT /////////////////////////////////////////////////

Point::Point( const char* name )
{
	double tmp;

	ifstream fichier(name);
	fichier >> this->size;

	this->coord = new double*[this->size];
	for (int i = 0; i < this->size; ++i)
	{
		this->coord[i] = new double[2];
		fichier >> tmp >> this->coord[i][0] >> this->coord[i][1];
	}  

	fichier.close();
}

Point::~Point() 
{
	cout << "destructeur de points : " << this->coord << endl;
	for (int i = 0; i < (this->size); ++i)
	{
		delete[] coord[i];
	}
	delete[] coord;
}

void Point::affiche()
{
	cout << "size = " << this->size << endl;
	for (int i = 0; i < (this->size); ++i)
	{
		cout << this->coord[i][0] << " " << this->coord[i][1] << endl;
	}
}

