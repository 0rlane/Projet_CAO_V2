
#include "classe_triangle.h"
#include <iostream>
#include <fstream>
using namespace std;

///////////////////////////////////////////// FONCTION TRIANGLE //////////////////////////////////////////////////

Triangle::Triangle( int a, int b, int c)
{
	coord[0] = a;
	coord[1] = b;
	coord[2] = c;
}

Triangle::~Triangle() 
{
	//cout << "destructeur de triangle : " << this->coord << endl;
	delete[] this->coord;
}

void Triangle::affiche()
{
	cout << "triangle " << this->coord << " : ";
	for (int i = 0; i < 3; ++i)
	{
		cout << this->coord[i] << " ";
	}
	cout << endl;
}

void Triangle::attrib_points( int a, int b, int c)
{
	this->coord[0] = a;
	this->coord[1] = b;
	this->coord[2] = c;
}

//////////////////////////////////////////////// FONCTIONS NON-MEMBRES ////////////////////////////////////////////

Triangle* LecTriangles(const char* name, int &NbTri)
{
	fstream fichier("listri.dat");
	fichier >> NbTri;
	int A,B,C;
	Triangle* listTriangles = new Triangle[NbTri];
	for (int i = 0; i < NbTri; ++i)
	{	
		fichier >> A >> B >> C;
		listTriangles[i].attrib_points(A,B,C);
	}
	fichier.close();
	return listTriangles;
}
