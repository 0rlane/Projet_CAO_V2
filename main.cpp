// Projet CAO 2018
// Orlane Duport & Thomas Trouillard

#include "classe_point.h"
#include "classe_triangle.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    Point ListPoints("points.pts");
    Triangle ListTriangles("listri.dat");

    //ListPoints.affiche();
    //ListTriangles.affiche();

    cout << "FIN" << endl;

	return 0;

}
