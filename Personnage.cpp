#include <Personnage.hpp>
#include <iostream>

void Personnage::AfficheStat ()
{
	std::cout << "Nom : " << Personnage::Nom << std::endl;
	std::cout << "Classe : " << Personnage::Classe <<std::endl;
	std::cout << "Force : " << Personnage::Force << std::endl;
	std::cout << "Dexeterite : " << Personnage::Dexterite << std::endl;
	std::cout << "Constitution : " << Personnage::Constitution << std::endl;
	std::cout << "Intelligence : " << Personnage::Intelligence << std::endl;
	std::cout << "Perception : " << Personnage::Perception << std::endl;
	std::cout << "Charisme : " << Personnage::Charisme << std::endl;
	std::cout << "" << std::endl;
}


