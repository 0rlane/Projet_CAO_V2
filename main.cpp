// Projet CAO 2018
// Orlane Duport & Thomas Trouillard

#include "classe_point.h"
#include "classe_triangle.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    int NbPts; // nombre de points
    int NbTri; // nombre de triangles

    Point* ListPoints = LecPoints("points.pts", NbPts); // liste de NbPts Points
    Triangle* ListTriangle = LecTriangles("listri.dat", NbTri); // liste de NbTri Triangles

    delete[] ListPoints;
    delete[] ListTriangle;

    cout << "FIN" << endl;

	return 0;

}
