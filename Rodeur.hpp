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
        void AfficheDeg();
};

class Archer: public Rodeur
{
        public:
        int Arc;

        void AfficheStat();
        void AfficheDeg();
};

#endif //__RODEUR_HPP
