#ifndef __COMBATTANT_HPP
#define __COMBATTANT_HPP

#include <Personnage.hpp>

class Combattant: public Personnage
{
        public:
        int ArmureL;
};

class Guerrier: public Combattant
{
        public:
        int ArmeD;

        void AfficheStat();
        int Deg();
	int DegRec(int);
};

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
