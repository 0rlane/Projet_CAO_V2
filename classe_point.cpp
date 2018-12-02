
#include "classe_point.h"
#include <iostream>
#include <fstream>
using namespace std;

/////////////////////////////////////////////// FONCTION POINT /////////////////////////////////////////////////

Point::Point( double xi, double yi)
{
  X = xi;
  Y = yi;
}

Point::~Point() {}

void Point::affiche()
{
	cout << this->X << " " << this->Y << endl;
}

//////////////////////////////////////////////// FONCTIONS  ////////////////////////////////////////////

Point* LecPoints(const char* name, int &N)
{
	double tmp;

	ifstream fichier(name);
	fichier >> N;

	Point* listPoints = new Point[N];
	for (int i = 0; i < N; ++i)
	{	
		// le numéro du point, on s'en fout 
		fichier >> tmp >> listPoints[i].X >> listPoints[i].Y;
	}

	fichier.close();
	return listPoints;
}
