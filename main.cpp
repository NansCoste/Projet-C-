#include <iostream>
#include <cstdlib>
#include <Personnage.hpp>
#include <Magicien.hpp>

int main ()
{
	srand(time(NULL));

	Personnage P1;
	P1.Nom = "Nans";
	P1.Classe = "Rodeur";
	P1.Vie = 20;
	P1.Attaque = 6;
	P1.Defence = 4;
	P1.AfficheStat();

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
}
