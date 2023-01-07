#include <Combattant.hpp>
#include <iostream>
#include <cstdlib>

//////////////////////////////////////////
// Affiche les statistiques du Guerrier //
//////////////////////////////////////////
void Guerrier::AfficheStat ()
{
	std::cout << "Nom : " << Guerrier::Nom << std::endl;
        std::cout << "Classe : " << Guerrier::Classe <<std::endl;
        std::cout << "Vie : " << Guerrier::Vie << std::endl;
        std::cout << "Attaque : " << Guerrier::Attaque << std::endl;
        std::cout << "Defence : " << Guerrier::Defence << std::endl;
	std::cout << "Armure : +" << Guerrier::ArmureL << std::endl;
        std::cout << "Arme a deux mains : +" << Guerrier::ArmeD << std::endl;
        std::cout << "" << std::endl;
}

////////////////////////////////////////////
// Calcule et affiche les dégats infligés //
////////////////////////////////////////////
int Guerrier::Deg()
{
        int deg = (rand() % 10);
        std::cout << "Dégats base : " << deg << std::endl;
        deg = deg + Guerrier::ArmeD + Guerrier::Attaque;
        std::cout << "Degats totaux : " << deg << std::endl;
        std::cout << "" << std::endl;
	return deg;
}

////////////////////////////////////////
// Calcule et affiche les dégats reçu //
////////////////////////////////////////
int Guerrier::DegRec(int Deg)
{
	int degrec = Deg - (Guerrier::Defence + Guerrier::ArmureL);
	if (degrec < 0)
		degrec = 0;
        std::cout << "Dégats reçus : " << degrec << std::endl;
        std::cout << "" << std::endl;
        return degrec;	
}

/////////////////////////////////////////
// Affiche les statistiques du Paladin //
/////////////////////////////////////////
void Paladin::AfficheStat()
{
	std::cout << "Nom : " << Paladin::Nom << std::endl;
        std::cout << "Classe : " << Paladin::Classe <<std::endl;
        std::cout << "Vie : " << Paladin::Vie << std::endl;
        std::cout << "Attaque : " << Paladin::Attaque << std::endl;
        std::cout << "Defence : " << Paladin::Defence << std::endl;
	std::cout << "Armure : +" << Paladin::ArmureL << std::endl;
        std::cout << "Arme : +" << Paladin::Arme << std::endl;
        std::cout << "Bouclier : +" << Paladin::Bouclier << std::endl;
        std::cout << "" << std::endl;
}

////////////////////////////////////////////
// Calcule et affiche les dégats infligés //
////////////////////////////////////////////
int Paladin::Deg()
{
        int deg = (rand() % 10);
        std::cout << "Dégats base : " << deg << std::endl;
        deg = deg + Paladin::Arme + Paladin::Attaque;
        std::cout << "Degats totaux : " << deg << std::endl;
        std::cout << "" << std::endl;
	return deg;
}

////////////////////////////////////////
// Calcule et affiche les dégats reçu //
////////////////////////////////////////
int Paladin::DegRec(int Deg)
{
        int degrec = Deg - (Paladin::Defence + Paladin::ArmureL);
        if (degrec < 0)
                degrec = 0;
        std::cout << "Dégats reçus : " << degrec << std::endl;
        std::cout << "" << std::endl;
        return degrec;
}

