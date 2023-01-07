#ifndef __COMBATTANT_HPP
#define __COMBATTANT_HPP

#include <Personnage.hpp>

////////////////////////////////////
// Classe principal du combattant //
// ArmureL = Armure lourde        //
////////////////////////////////////
class Combattant: public Personnage
{
        public:
        int ArmureL;
};

////////////////////////////////
// Classe spécifique Guerrier //
// ArmeD = Arme à deux main   //
////////////////////////////////
class Guerrier: public Combattant
{
        public:
        int ArmeD;

        void AfficheStat();
        int Deg();
	int DegRec(int);
};

///////////////////////////////
// Classe spécifique Paladin //
// Arme = Arme à une main    //
///////////////////////////////
class Paladin: public Combattant
{
        public:
        int Arme;
        int Bouclier;

	void AfficheStat();
	int Deg();
        int DegRec(int);
};

#endif //__COMBATTANT_HPP
