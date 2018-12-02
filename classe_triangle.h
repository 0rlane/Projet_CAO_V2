
#ifndef CLASSE_TRIANGLE_H
#define CLASSE_TRIANGLE_H

class Triangle
{
private:

public:
	// données
	//int* coord = new int[3];
	int* coord = new int[3];

	// constructeur & destructeur
	Triangle() { coord[0]=coord[1]=coord[2]=-1; }
	Triangle( int a, int b, int c );
	~Triangle();

	// fonctions
	void affiche(void);

};

////////////////////////////////// FONCTIONS ///////////////////////////////////

//Triangle* LecTriangles(const char* name, int &N)

#endif