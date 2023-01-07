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
	std::cout << "Armure : +" << Combattant::ArmureL << std::endl;
        std::cout << "Arme a deux mains : +" << Guerrier::ArmeD << std::endl;
        std::cout << "" << std::endl;
}

int Guerrier::Deg()
{
        int deg = (rand() % 10);
        std::cout << "Dégats base : " << deg << std::endl;
        deg = deg + Guerrier::ArmeD + Personnage::Attaque;
        std::cout << "Degats totaux : " << deg << std::endl;
        std::cout << "" << std::endl;
	return deg;
}

int Guerrier::DegRec(int Deg)
{
	int degrec = Deg - (Personnage::Defence + Combattant::ArmureL);
	if (degrec < 0)
		degrec = 0;
        std::cout << "Dégats reçus : " << degrec << std::endl;
        std::cout << "" << std::endl;
        return degrec;	
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

int Paladin::Deg()
{
        int deg = (rand() % 10);
        std::cout << "Dégats base : " << deg << std::endl;
        deg = deg + Paladin::Arme + Personnage::Attaque;
        std::cout << "Degats totaux : " << deg << std::endl;
        std::cout << "" << std::endl;
	return deg;
}

int Paladin::DegRec(int Deg)
{
        int degrec = Deg - (Personnage::Defence + Combattant::ArmureL);
        if (degrec < 0)
                degrec = 0;
        std::cout << "Dégats reçus : " << degrec << std::endl;
        std::cout << "" << std::endl;
        return degrec;
}

