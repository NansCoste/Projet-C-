#include <Magicien.hpp>
#include <iostream>
#include <cstdlib>

void Elementaire::AfficheStat ()
{
	std::cout << "Nom : " << Personnage::Nom << std::endl;
        std::cout << "Classe : " << Personnage::Classe <<std::endl;
        std::cout << "Vie : " << Personnage::Vie << std::endl;
        std::cout << "Attaque : " << Personnage::Attaque << std::endl;
        std::cout << "Defence : " << Personnage::Defence << std::endl;
	std::cout << "Vetement : " << Magicien::Vetement << std::endl;
	std::cout << "Mana : " << Elementaire::Mana << std::endl;
	std::cout << "Baton : +" << Elementaire::Baton << std::endl;
	std::cout << "Focus : +" << Elementaire::Focus << std::endl;
	std::cout << "" << std::endl;
}

int Elementaire::Deg()
{
	int deg = (rand() % 30);
	std::cout << "Dégats base : " << deg << std::endl;
	deg = deg + Elementaire::Baton + Elementaire::Focus + Magicien::Mana;
	std::cout << "Degats totaux : " << deg << std::endl;
	std::cout << "" << std::endl;
	return deg;
}

int Elementaire::DegRec(int Deg)
{
        int degrec = Deg - (Personnage::Defence + Elementaire::Vetement);
        std::cout << "Dégats reçus : " << degrec << std::endl;
        std::cout << "" << std::endl;
        return degrec;
}

void Sombre::AfficheStat()
{
	std::cout << "Nom : " << Personnage::Nom << std::endl;
        std::cout << "Classe : " << Personnage::Classe <<std::endl;
        std::cout << "Vie : " << Personnage::Vie << std::endl;
        std::cout << "Attaque : " << Personnage::Attaque << std::endl;
        std::cout << "Defence : " << Personnage::Defence << std::endl;
	std::cout << "Vetement : " << Magicien::Vetement << std::endl;
        std::cout << "Mana : " << Sombre::Mana << std::endl;
        std::cout << "Baguette : +" << Sombre::Baguette << std::endl;
        std::cout << "Livre : +" << Sombre::Livre << std::endl;
        std::cout << "" << std::endl;
}

int Sombre::Deg()
{
	int deg = (rand() % 30);
	std::cout << "Dégats base : " << deg << std::endl;
	deg = deg + Sombre::Baguette + Sombre::Livre + Magicien::Mana;
	std::cout << "Degats totaux : " << deg << std::endl;
	std::cout << "" << std::endl;
	return deg;
}

int Sombre::DegRec(int Deg)
{
        int degrec = Deg - (Personnage::Defence + Magicien::Vetement);
        std::cout << "Dégats reçus : " << degrec << std::endl;
        std::cout << "" << std::endl;
        return degrec;
}

