#include <Magicien.hpp>
#include <iostream>
#include <cstdlib>

void Elementaire::AfficheStat ()
{
	Personnage::AfficheStat();
	std::cout << "Mana : " << Elementaire::Mana << std::endl;
	std::cout << "Baton : +" << Elementaire::Baton << std::endl;
	std::cout << "Focus : +" << Elementaire::Focus << std::endl;
	std::cout << "" << std::endl;
}

void Elementaire::AfficheDeg()
{
	int deg = (rand() % 20);
	std::cout << "Dégats base : " << deg << std::endl;
	deg = deg + Elementaire::Baton + Elementaire::Focus;
	std::cout << "Degats totaux : " << deg << std::endl;
	std::cout << "" << std::endl;
}

void Sombre::AfficheStat()
{
	Personnage::AfficheStat();
        std::cout << "Mana : " << Sombre::Mana << std::endl;
        std::cout << "Baguette : +" << Sombre::Baguette << std::endl;
        std::cout << "Livre : +" << Sombre::Livre << std::endl;
        std::cout << "" << std::endl;
}

void Sombre::AfficheDeg()
{
	int deg = (rand() % 20);
	std::cout << "Dégats base : " << deg << std::endl;
	deg = deg + Sombre::Baguette + Sombre::Livre;
	std::cout << "Degats totaux : " << deg << std::endl;
	std::cout << "" << std::endl;
}
