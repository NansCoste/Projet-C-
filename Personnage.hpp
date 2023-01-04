#ifndef __PERSONNAGE_HPP
#define __PERSONNAGE_HPP

class Personnage
{
	public:
	const char* Nom;
	const char* Classe;
	int Vie;
	int Attaque;
	int Defence;
	
	void AfficheStat();
};

#endif //__PERSONNAGE_HPP
