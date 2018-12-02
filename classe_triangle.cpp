
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


//////////////////////////////////////////////// FONCTIONS  ////////////////////////////////////////////

/*
Triangle* LecTriangles(const char* name, int &N)
{
	ifstream fichier(name);
	fichier >> N;

	int A,B,C;

	Triangle* listTriangles = new Triangle[N];
	for (int i = 0; i < N; ++i)
	{	
		fichier >> A >> B >> C;
		cout << A << " " << B << " " << C << endl;
	}

	fichier.close();

	return listTriangles;
}
*/
