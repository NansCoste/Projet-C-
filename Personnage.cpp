#include <Personnage.hpp>
#include <iostream>

void Personnage::AfficheStat ()
{
	std::cout << "Nom : " << Personnage::Nom << std::endl;
	std::cout << "Classe : " << Personnage::Classe <<std::endl;
	std::cout << "Vie : " << Personnage::Vie << std::endl;
	std::cout << "Attaque : " << Personnage::Attaque << std::endl;
	std::cout << "Defence : " << Personnage::Defence << std::endl;
	std::cout << "" << std::endl;
}


