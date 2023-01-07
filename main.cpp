#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <Personnage.hpp>
#include <Magicien.hpp>
#include <Rodeur.hpp>
#include <Combattant.hpp>

int main ()
{
	srand(time(NULL));			// Base aléatoire pour les attaques
	int choix;				// Choix pour les combats

	//////////////////////////
	// Création d'un voleur //
	// ///////////////////////
	Voleur V1;
	V1.Nom = "Nigel";
	V1.Classe = "Voleur";
	V1.Vie = 30;
	V1.Attaque = 6;
	V1.Defence = 4;
	V1.Armure = 2;
	V1.Arme = 4;

	///////////////////////////////////////
	//Création d'un Magicien Elémentaire //
	///////////////////////////////////////
	Elementaire E1;
	E1.Nom = "Keiran";
        E1.Classe = "Magicien elementaire";
	E1.Vie = 20;
	E1.Attaque = 4;
	E1.Defence = 2;
	E1.Vetement = 2;
	E1.Mana = 6;
	E1.Baton = 3;
	E1.Focus = 2;

	///////////////////////////////////
	// Création d'un Magicien Sombre //
	///////////////////////////////////
	Sombre S1;
	S1.Nom = "Salazar";
	S1.Classe = "Magicien sombre";
	S1.Vie = 30;
	S1.Attaque = 4;
	S1.Defence = 3;
	S1.Vetement = 2;
	S1.Mana = 8;
	S1.Baguette = 2;
	S1.Livre = 2;

	////////////////////////////
	// Création d'un Guerrier //
	////////////////////////////
	Guerrier G1;
	G1.Nom = "Faramir";
	G1.Classe = "Guerrier";
	G1.Vie = 40;
	G1.Attaque = 10;
	G1.Defence = 6;
	G1.ArmureL = 4;
	G1.ArmeD = 8;

	///////////////////////////
	// Création d'un Paladin //
	///////////////////////////
	Paladin P1;
        P1.Nom = "Théo";
        P1.Classe = "Paladin";
        P1.Vie = 50;
        P1.Attaque = 10;
        P1.Defence = 8;
	P1.ArmureL = 6;
        P1.Arme = 6;
	P1.Bouclier = 2;
	
	//////////////////////////
	// Création d'un Archer //
	//////////////////////////
	Archer A1;
	A1.Nom = "Guillamue";
	A1.Classe = "Archer";
	A1.Vie = 20;
	A1.Attaque = 6;
	A1.Defence = 4;
	A1.Armure = 2;
	A1.Arc = 4;


	std::cout << "Choississez votre combat : 1. Voleur vs Guerrier" << std::endl;
	std::cout << "			   2. Archer vs Magicien elementaire" << std::endl;
	std::cout << "			   3. Paladin vs Magicin sombre" << std::endl;
	std::cin >> choix;

	int i = 1;			// Permet de voir le nombre de tour d'un combat
	bool combat = true;		// Pour la boucle du combat

	////////////////////////////
	// Voleur contre Guerrier //
	////////////////////////////
	if (choix == 1)
	{
		int degV, degrecV, degG, degrecG;
		V1.AfficheStat();
		G1.AfficheStat();
		do 
		{
			std::cout << "Tour " << i << std::endl;
			std::cout << "Attaque du Voleur" << std::endl << std::endl;
			degV = V1.Deg();
			degrecG = V1.DegRec(degV);
			G1.Vie -= degrecG;
			std::cout << "Vie Guerrier : " << G1.Vie << std::endl << std::endl;
			if (G1.Vie <= 0)
                        {
                                std::cout << "Le Guerrier est mort" << std::endl;
                                combat = false;
				return 0;
                        }
			sleep(1);
			std::cout << "Attaque du Geurrier" << std::endl << std::endl;
			degG = G1.Deg();
			degrecV = V1.DegRec(degG);
			V1.Vie -= degrecV;
			std::cout << "Vie Voleur : " << V1.Vie << std::endl << std::endl;
			i++;
			if (V1.Vie <=0)
			{
				std::cout << "Le Voleur est mort" << std::endl;
                                combat = false;
				return 0;
			}
			std::cout << "" << std::endl;
			sleep(2);
		}while (combat);
	}

	////////////////////////////////////////
	// Archer contre Magicien Elémentaire //
	////////////////////////////////////////
	else if (choix == 2)
        {
                int degA, degrecA, degE, degrecE;
                A1.AfficheStat();
                E1.AfficheStat();
                do
                {
                        std::cout << "Tour " << i << std::endl;
                        std::cout << "Attaque de l'Archer" << std::endl << std::endl;
                        degA = A1.Deg();
                        degrecE = E1.DegRec(degA);
                        E1.Vie -= degrecE;
                        std::cout << "Vie Magicien Elementaire : " << E1.Vie << std::endl << std::endl;
			if (E1.Vie <=0)
                        {
                                std::cout << "Le Magicien Elementaire est mort" << std::endl;
                                combat = false;
				return 0;
                        }
			sleep(1);
                        std::cout << "Attaque du Magicien Elementaire" << std::endl << std::endl;
                        degE = E1.Deg();
                        degrecA = A1.DegRec(degE);
                        A1.Vie -= degrecA;
                        std::cout << "Vie Archer : " << A1.Vie << std::endl << std::endl;
                        i++;
                        if (A1.Vie <= 0)
                        {
                                std::cout << "L'Archer est mort" << std::endl;
                                combat = false;
				return 0;
                        }
                        std::cout << "" << std::endl;
                        sleep(2);
                }while (combat);
        }
	
	////////////////////////////////////
	// Paladin contre Magicien Sombre //
	////////////////////////////////////
	else if (choix == 3)
	{
		int degP, degrecP, degS, degrecS;
                P1.AfficheStat();
                S1.AfficheStat();
                do
                {
                        std::cout << "Tour " << i << std::endl;
                        std::cout << "Attaque du Magicien Sombre" << std::endl << std::endl;
                        degS = S1.Deg();
                        degrecP = P1.DegRec(degS);
                        P1.Vie -= degrecP;
                        std::cout << "Vie Paladin : " << P1.Vie << std::endl << std::endl;
                        if (P1.Vie <=0)
                        {
                                std::cout << "Le Paladin est mort" << std::endl;
                                combat = false;
                                return 0;
                        }
                        sleep(1);
                        std::cout << "Attaque du Paladin" << std::endl << std::endl;
                        degP = P1.Deg();
                        degrecS = S1.DegRec(degP);
                        S1.Vie -= degrecS;
                        std::cout << "Vie Magicien Sombre : " << S1.Vie << std::endl << std::endl;
                        i++;
                        if (S1.Vie <= 0)
                        {
                                std::cout << "Le Magicien Sombre est mort" << std::endl;
                                combat = false;
                                return 0;
                        }
                        std::cout << "" << std::endl;
                        sleep(2);
                }while (combat);
        }

	else 
	{
		std::cout << "Action non permise, relancez le programme" << std::endl;
	}
}
