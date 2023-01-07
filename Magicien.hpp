#ifndef __MAGICIEN_HPP
#define __MAGICIEN_HPP

#include <Personnage.hpp>

class Magicien: public Personnage
{
	public:
	int Mana;
	int Vetement;
};

class Elementaire: public Magicien
{
	public:
	int Baton;
	int Focus;

	void AfficheStat();
	int Deg();
        int DegRec(int);
};

class Sombre: public Magicien
{
	public:
	int Baguette;
	int Livre;

	void AfficheStat();
	int Deg();
        int DegRec(int);
};

#endif //__MAGICIEN_HPP
