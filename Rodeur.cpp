#include <Rodeur.hpp>
#include <iostream>
#include <cstdlib>

////////////////////////////////////////
// Affiche les statistiques du Voleur //
////////////////////////////////////////
void Voleur::AfficheStat ()
{
        std::cout << "Nom : " << Voleur::Nom << std::endl;
        std::cout << "Classe : " << Voleur::Classe <<std::endl;
        std::cout << "Vie : " << Voleur::Vie << std::endl;
        std::cout << "Attaque : " << Voleur::Attaque << std::endl;
        std::cout << "Defence : " << Voleur::Defence << std::endl;
        std::cout << "Armure : +" << Voleur::Armure << std::endl;
        std::cout << "Arme : +" << Voleur::Arme << std::endl;
        std::cout << "" << std::endl;
}

////////////////////////////////////////////
// Calcule et affiche les dégats infligés //
////////////////////////////////////////////
int Voleur::Deg()
{
        int deg = (rand() % 20);
        std::cout << "Dégats base : " << deg << std::endl;
        deg = deg + Voleur::Arme + Voleur::Attaque;
        std::cout << "Dégats totaux : " << deg << std::endl;
        std::cout << "" << std::endl;
	return deg;
}

////////////////////////////////////////
// Calcule et affiche les dégats reçu //
////////////////////////////////////////
int Voleur::DegRec(int Deg)
{
	int degrec = Deg - (Voleur::Defence + Voleur::Armure);
	std::cout << "Dégats reçus : " << degrec << std::endl;
	std::cout << "" << std::endl;
	return degrec;
}

//////////////////////////////////////////
// Affiche les statistiques de l'Archer //
//////////////////////////////////////////
void Archer::AfficheStat()
{
        std::cout << "Nom : " << Archer::Nom << std::endl;
        std::cout << "Classe : " << Archer::Classe <<std::endl;
        std::cout << "Vie : " << Archer::Vie << std::endl;
        std::cout << "Attaque : " << Archer::Attaque << std::endl;
        std::cout << "Defence : " << Archer::Defence << std::endl;
        std::cout << "Armure : +" << Archer::Armure << std::endl;
        std::cout << "Arc : +" << Archer::Arc << std::endl;
        std::cout << "" << std::endl;
}

////////////////////////////////////////////
// Calcule et affiche les dégats infligés //
////////////////////////////////////////////
int Archer::Deg()
{
        int deg = (rand() % 20);
        std::cout << "Dégats base : " << deg << std::endl;
        deg = deg + Archer::Arc + Archer::Attaque;
        std::cout << "Degats totaux : " << deg << std::endl;
        std::cout << "" << std::endl;
	return deg;
}

////////////////////////////////////////
// Calcule et affiche les dégats reçu //
////////////////////////////////////////
int Archer::DegRec(int Deg)
{
        int degrec = Deg - (Personnage::Defence + Rodeur::Armure);
        std::cout << "Dégats reçus : " << degrec << std::endl;
        std::cout << "" << std::endl;
        return degrec;
}
