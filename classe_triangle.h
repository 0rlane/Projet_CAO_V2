
#ifndef CLASSE_TRIANGLE_H
#define CLASSE_TRIANGLE_H

class Triangle
{
private:
	// données
	int* coord = new int[3];
public:
	// constructeur & destructeur
	Triangle() { coord[0]=coord[1]=coord[2]=-1; }
	Triangle( int a, int b, int c );
	~Triangle();

	// fonctions
	void affiche(void);
	void attrib_points( int a, int b, int c);

};

////////////////////////////////// FONCTIONS NON-MEMBRES ///////////////////////////////////

Triangle* LecTriangles(const char* name, int &NbTri);

#endif