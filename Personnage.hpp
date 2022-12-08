#ifndef __PERSONNAGE_HPP
#define __PERSONNAGE_HPP

class Personnage
{
	public:
	const char* Nom;
	const char* Classe;
	int Force;
	int Dexterite;
	int Constitution;
	int Intelligence;
	int Perception;
	int Charisme;
	
	void AfficheStat();
};

#endif //__PERSONNAGE_HPP
