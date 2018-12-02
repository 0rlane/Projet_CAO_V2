// definition des classes utilisées

#ifndef CLASSE_POINT_H
#define CLASSE_POINT_H

class Point
{
private:
	// données
	double X,Y;
public:
	// constructeur & destructeur
	Point() { X = Y = -1.; }
	Point( double xi, double yi);
	~Point();

	// fonctions
	void affiche(void);
	void attrib_coord(double x, double y);

};

/////////////////////////////////// FONCTIONS NON-MEMBRES /////////////////////////////////////

Point* LecPoints(const char* name, int &N);

#endif