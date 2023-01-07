#include <iostream>
#include <cstdlib>
#include <Personnage.hpp>
#include <Magicien.hpp>
#include <Rodeur.hpp>
#include <Combattant.hpp>

int main ()
{
	srand(time(NULL));

	Voleur P1;
	P1.Nom = "Nans";
	P1.Classe = "Voleur";
	P1.Vie = 20;
	P1.Attaque = 6;
	P1.Defence = 4;
	P1.Armure = 2;
	P1.Arme = 3;
	P1.AfficheStat();
	P1.AfficheDeg();

	Elementaire P2;
	P2.Nom = "Alex";
        P2.Classe = "Magicien elementaire";
	P2.Vie = 12;
	P2.Attaque = 8;
	P2.Defence = 2;
	P2.Mana = 10;
	P2.Baton = 2;
	P2.Focus = 1;
	P2.AfficheStat();
	P2.AfficheDeg();

	Sombre S1;
	S1.Nom = "Ilyes";
	S1.Classe = "Magicien sombre";
	S1.Vie = 12;
	S1.Attaque = 8;
	S1.Defence = 3;
	S1.Baguette = 3;
	S1.Livre = 2;
	S1.AfficheStat();
	S1.AfficheDeg();

	Guerrier G1;
	G1.Nom = "Grumph";
	G1.Classe = "Guerrier";
	G1.Vie = 30;
	G1.Attaque = 12;
	G1.Defence = 6;
	G1.ArmeD = 4;
	G1.AfficheStat();
	G1.AfficheDeg();

	Paladin G2;
        G2.Nom = "Grumph";
        G2.Classe = "Paladin";
        G2.Vie = 30;
        G2.Attaque = 10;
        G2.Defence = 8;
        G2.Arme = 2;
        G2.AfficheStat();
        G2.AfficheDeg();

}
