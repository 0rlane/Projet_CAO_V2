// definition des classes utilisées

#ifndef CLASSE_POINT_H
#define CLASSE_POINT_H

class Point
{
private:

public:
	// données
	double X, Y;

	// constructeur & destructeur
	Point() { X = Y = -1.; }
	Point( double xi, double yi);
	~Point();

	// fonctions
	void affiche(void);

};

Point* LecPoints(const char* name, int &N);

#endif