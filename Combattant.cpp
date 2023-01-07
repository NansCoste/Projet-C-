#include <Combattant.hpp>
#include <iostream>
#include <cstdlib>

void Guerrier::AfficheStat ()
{
	std::cout << "Nom : " << Personnage::Nom << std::endl;
        std::cout << "Classe : " << Personnage::Classe <<std::endl;
        std::cout << "Vie : " << Personnage::Vie << std::endl;
        std::cout << "Attaque : " << Personnage::Attaque << std::endl;
        std::cout << "Defence : " << Personnage::Defence << std::endl;
        std::cout << "Arme a deux mains : +" << Guerrier::ArmeD << std::endl;
        std::cout << "" << std::endl;
}

void Guerrier::AfficheDeg()
{
        int deg = (rand() % 20);
        std::cout << "Dégats base : " << deg << std::endl;
        deg = deg + Guerrier::ArmeD;
        std::cout << "Degats totaux : " << deg << std::endl;
        std::cout << "" << std::endl;
}

void Paladin::AfficheStat()
{
	std::cout << "Nom : " << Personnage::Nom << std::endl;
        std::cout << "Classe : " << Personnage::Classe <<std::endl;
        std::cout << "Vie : " << Personnage::Vie << std::endl;
        std::cout << "Attaque : " << Personnage::Attaque << std::endl;
        std::cout << "Defence : " << Personnage::Defence << std::endl;
        std::cout << "Arme : +" << Paladin::Arme << std::endl;
        std::cout << "Bouclier : +" << Paladin::Bouclier << std::endl;
        std::cout << "" << std::endl;
}

void Paladin::AfficheDeg()
{
        int deg = (rand() % 20);
        std::cout << "Dégats base : " << deg << std::endl;
        deg = deg + Paladin::Arme;
        std::cout << "Degats totaux : " << deg << std::endl;
        std::cout << "" << std::endl;
}
