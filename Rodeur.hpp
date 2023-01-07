#ifndef __RODEUR_HPP
#define __RODEUR_HPP

#include <Personnage.hpp>

////////////////////////////////
// Classe principal du Rodeur //
// Armure = Armure légère     //
////////////////////////////////
class Rodeur: public Personnage
{
        public:
        int Armure;
};

//////////////////////////////////
// Classe spécifique Voleur     //
// Arme = Dâgue ou armme courte //
//////////////////////////////////
class Voleur: public Rodeur
{
        public:
        int Arme;

        void AfficheStat();
        int Deg();
	int DegRec(int);
};

//////////////////////////////
// Classe spécifique Archer //
//////////////////////////////
class Archer: public Rodeur
{
        public:
        int Arc;

        void AfficheStat();
        int Deg();
	int DegRec(int);
};

#endif //__RODEUR_HPP
