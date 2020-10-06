  

//Programme OP_SUR1.CPP - la fonction "operator+" est membre de la classe
//-----------------------------------------------------------------------
# include<iostream.h>

class rectangle
{
	int longueur, largeur;

public:
    rectangle(int x=0, int y=0){longueur=x; largeur=y;} //constructeur inline
	
	int surface() { return longueur*largeur; };         //avec arg/defaut
    
	  
		
	rectangle operator+ (rectangle);
	rectangle operator+ (int);
};



rectangle rectangle::operator+ ( rectangle A )   // la fonction "operator+"
{                                               // appartient … la classe
	rectangle C;                                    // et retourne un objet de
	C.longueur = longueur + A.longueur;             // type rectangle
	C.largeur = largeur + A.largeur;
	return C;
}



rectangle rectangle::operator+ (int num)   // la fonction "operator+"
{                                               // appartient … la classe
	rectangle C;                            
	C.longueur = longueur + num;
	C.largeur = largeur + num;
	
	return C;
}


void main()
{
	rectangle petit(10,20), moyen(30,40);
	rectangle grand;
	grand = petit + moyen;

	cout << grand.surface() << endl;
}


//Exercices


/* Dans la classe "rectangle" faites une surcharge multiple de l'opérateur '+', 
afin de réaliser en dehors de la somme: grand=petit+moyen, la relation:
grand = 10 + petit, où 10 est un paramètre qui s'ajoute à la largeur de "petit".*/

