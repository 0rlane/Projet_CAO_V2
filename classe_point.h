// definition des classes utilisées

#ifndef CLASSE_POINT_H
#define CLASSE_POINT_H

class Point
{
private:
	// données
	int size;
	double **coord;


public:
	// constructeur & destructeur
	Point() { size=-1; }
	Point( const char* name );
	~Point();

	// fonctions
	void affiche(void);
};

#endif