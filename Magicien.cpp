#include <Magicien.hpp>
#include <iostream>
#include <cstdlib>

void Elementaire::AfficheStat ()
{
	std::cout << "Nom : " << Elementaire::Nom << std::endl;
        std::cout << "Classe : " << Elementaire::Classe <<std::endl;
        std::cout << "Force : " << Elementaire::Force << std::endl;
        std::cout << "Dexeterite : " << Elementaire::Dexterite << std::endl;
        std::cout << "Constitution : " << Elementaire::Constitution << std::endl;
        std::cout << "Intelligence : " << Elementaire::Intelligence << std::endl;
        std::cout << "Perception : " << Elementaire::Perception << std::endl;
        std::cout << "Charisme : " << Elementaire::Charisme << std::endl;
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
	std::cout << "Nom : " << Sombre::Nom << std::endl;
        std::cout << "Classe : " << Sombre::Classe <<std::endl;
        std::cout << "Force : " << Sombre::Force << std::endl;
        std::cout << "Dexeterite : " << Sombre::Dexterite << std::endl;
        std::cout << "Constitution : " << Sombre::Constitution << std::endl;
        std::cout << "Intelligence : " << Sombre::Intelligence << std::endl;
        std::cout << "Perception : " << Sombre::Perception << std::endl;
        std::cout << "Charisme : " << Sombre::Charisme << std::endl;
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
