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

void Voleur::AfficheDeg()
{
        int deg = (rand() % 20);
        std::cout << "Dégats base : " << deg << std::endl;
        deg = deg + Voleur::Arme;
        std::cout << "Degats totaux : " << deg << std::endl;
        std::cout << "" << std::endl;
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

void Archer::AfficheDeg()
{
        int deg = (rand() % 20);
        std::cout << "Dégats base : " << deg << std::endl;
        deg = deg + Archer::Arc;
        std::cout << "Degats totaux : " << deg << std::endl;
        std::cout << "" << std::endl;
}
