
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

void Point::attrib_coord(double xi, double yi)
{
	X = xi;
	Y = yi;
}

//////////////////////////////////////////////// FONCTIONS NON-MEMBRES ////////////////////////////////////////////

Point* LecPoints(const char* name, int &N)
{
	double tmp, A, B;

	ifstream fichier(name);
	fichier >> N;

	Point* listPoints = new Point[N];
	for (int i = 0; i < N; ++i)
	{	
		// le numéro du point, on s'en fout 
		fichier >> tmp >> A >> B;
		listPoints[i].attrib_coord(A,B);
	}

	fichier.close();
	return listPoints;
}
