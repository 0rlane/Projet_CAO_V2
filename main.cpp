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

    Triangle* ListTriangle = new Triangle[5];
    ListTriangle[3].affiche();

    Point* ListPoints = LecPoints("points.pts", NbPts); // liste de NbPts Points
    //Triangle* ListTriangle = LecTriangles("listri.dat", NbTri); // liste de NbTri Triangles
    /*
    for (int i = 0; i < NbTri; ++i)
    {
    	ListTriangle[i].affiche();
    }
	*/

    /*
    for (int i = 0; i < NbPts; ++i)
    {
    	ListPoints[i].affiche();
    }
    */

    delete[] ListPoints;
    delete[] ListTriangle;

    cout << "FIN" << endl;

	return 0;

}
