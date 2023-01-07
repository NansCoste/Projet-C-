#include <Magicien.hpp>
#include <iostream>
#include <cstdlib>

//////////////////////////////////////////////////////
// Affiche les statistiques du Magicien Elémentaire //
//////////////////////////////////////////////////////
void Elementaire::AfficheStat ()
{
	std::cout << "Nom : " << Elementaire::Nom << std::endl;
        std::cout << "Classe : " << Elementaire::Classe <<std::endl;
        std::cout << "Vie : " << Elementaire::Vie << std::endl;
        std::cout << "Attaque : " << Elementaire::Attaque << std::endl;
        std::cout << "Defence : " << Elementaire::Defence << std::endl;
	std::cout << "Vetement : +" << Elementaire::Vetement << std::endl;
	std::cout << "Mana : +" << Elementaire::Mana << std::endl;
	std::cout << "Baton : +" << Elementaire::Baton << std::endl;
	std::cout << "Focus : +" << Elementaire::Focus << std::endl;
	std::cout << "" << std::endl;
}

////////////////////////////////////////////
// Calcule et affiche les dégats infligés //
////////////////////////////////////////////
int Elementaire::Deg()
{
	int deg = (rand() % 30);
	std::cout << "Dégats base : " << deg << std::endl;
	deg = deg + Elementaire::Baton + Elementaire::Focus + Elementaire::Mana;
	std::cout << "Degats totaux : " << deg << std::endl;
	std::cout << "" << std::endl;
	return deg;
}

////////////////////////////////////////
// Calcule et affiche les dégats reçu //
////////////////////////////////////////
int Elementaire::DegRec(int Deg)
{
        int degrec = Deg - (Elementaire::Defence + Elementaire::Vetement);
        std::cout << "Dégats reçus : " << degrec << std::endl;
        std::cout << "" << std::endl;
        return degrec;
}

/////////////////////////////////////////////////
// Affiche les statistiques du Magicien Sombre //
/////////////////////////////////////////////////
void Sombre::AfficheStat()
{
	std::cout << "Nom : " << Sombre::Nom << std::endl;
        std::cout << "Classe : " << Sombre::Classe <<std::endl;
        std::cout << "Vie : " << Sombre::Vie << std::endl;
        std::cout << "Attaque : " << Sombre::Attaque << std::endl;
        std::cout << "Defence : " << Sombre::Defence << std::endl;
	std::cout << "Vetement : +" << Sombre::Vetement << std::endl;
        std::cout << "Mana : +" << Sombre::Mana << std::endl;
        std::cout << "Baguette : +" << Sombre::Baguette << std::endl;
        std::cout << "Livre : +" << Sombre::Livre << std::endl;
        std::cout << "" << std::endl;
}

////////////////////////////////////////////
// Calcule et affiche les dégats infligés //
////////////////////////////////////////////
int Sombre::Deg()
{
	int deg = (rand() % 30);
	std::cout << "Dégats base : " << deg << std::endl;
	deg = deg + Sombre::Baguette + Sombre::Livre + Sombre::Mana;
	std::cout << "Degats totaux : " << deg << std::endl;
	std::cout << "" << std::endl;
	return deg;
}

////////////////////////////////////////
// Calcule et affiche les dégats reçu //
////////////////////////////////////////
int Sombre::DegRec(int Deg)
{
        int degrec = Deg - (Sombre::Defence + Sombre::Vetement);
        std::cout << "Dégats reçus : " << degrec << std::endl;
        std::cout << "" << std::endl;
        return degrec;
}

