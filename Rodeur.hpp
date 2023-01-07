#ifndef __RODEUR_HPP
#define __RODEUR_HPP

#include <Personnage.hpp>

class Rodeur: public Personnage
{
        public:
        int Armure;
};

class Voleur: public Rodeur
{
        public:
        int Arme;

        void AfficheStat();
        int Deg();
	int DegRec(int);
};

class Archer: public Rodeur
{
        public:
        int Arc;

        void AfficheStat();
        int Deg();
	int DegRec(int);
};

#endif //__RODEUR_HPP
