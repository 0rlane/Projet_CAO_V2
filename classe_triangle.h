
#ifndef CLASSE_TRIANGLE_H
#define CLASSE_TRIANGLE_H

class Triangle
{
private:
	// données
	int size;
	int **points;

public:
	// constructeur & destructeur
	Triangle() { size=-1; }
	Triangle( const char* name );
	~Triangle();

	// fonctions
	void affiche(void);

};

#endif