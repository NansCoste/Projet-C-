#include <Rodeur.hpp>
#include <iostream>
#include <cstdlib>

void Voleur::AfficheStat ()
{
        std::cout << "Nom : " << Personnage::Nom << std::endl;
        std::cout << "Classe : " << Personnage::Classe <<std::endl;
        std::cout << "Vie : " << Personnage::Vie << std::endl;
        std::cout << "Attaque : " << Personnage::Attaque << std::endl;
        std::cout << "Defence : " << Personnage::Defence << std::endl;
        std::cout << "Armure : " << Voleur::Armure << std::endl;
        std::cout << "Arme : +" << Voleur::Arme << std::endl;
        std::cout << "" << std::endl;
}

int Voleur::Deg()
{
        int deg = (rand() % 20);
        std::cout << "Dégats base : " << deg << std::endl;
        deg = deg + Voleur::Arme + Personnage::Attaque;
        std::cout << "Dégats totaux : " << deg << std::endl;
        std::cout << "" << std::endl;
	return deg;
}

int Voleur::DegRec(int Deg)
{
	int degrec = Deg - (Voleur::Defence + Voleur::Armure);
	std::cout << "Dégats reçus : " << degrec << std::endl;
	std::cout << "" << std::endl;
	return degrec;
}

void Archer::AfficheStat()
{
        std::cout << "Nom : " << Personnage::Nom << std::endl;
        std::cout << "Classe : " << Personnage::Classe <<std::endl;
        std::cout << "Vie : " << Personnage::Vie << std::endl;
        std::cout << "Attaque : " << Personnage::Attaque << std::endl;
        std::cout << "Defence : " << Personnage::Defence << std::endl;
        std::cout << "Armure : " << Archer::Armure << std::endl;
        std::cout << "Arc : +" << Archer::Arc << std::endl;
        std::cout << "" << std::endl;
}

int Archer::Deg()
{
        int deg = (rand() % 20);
        std::cout << "Dégats base : " << deg << std::endl;
        deg = deg + Archer::Arc + Personnage::Attaque;
        std::cout << "Degats totaux : " << deg << std::endl;
        std::cout << "" << std::endl;
	return deg;
}

int Archer::DegRec(int Deg)
{
        int degrec = Deg - (Personnage::Defence + Rodeur::Armure);
        std::cout << "Dégats reçus : " << degrec << std::endl;
        std::cout << "" << std::endl;
        return degrec;
}
