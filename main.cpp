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
	P1.Force = 10;
	P1.Dexterite = 16;
	P1.Constitution = 12;
	P1.Intelligence = 14;
	P1.Perception = 17;
	P1.Charisme = 20;
	P1.AfficheStat();

	Elementaire P2;
	P2.Nom = "Alex";
        P2.Classe = "Magicien elementaire";
        P2.Force = 5;
        P2.Dexterite = 12;
        P2.Constitution = 10;
        P2.Intelligence = 18;
        P2.Perception = 17;
        P2.Charisme = 20;
	P2.Mana = 10;
	P2.Baton = 2;
	P2.Focus = 1;
	P2.AfficheStat();
	P2.AfficheDeg();

	Sombre S1;
	S1.Nom = "Ilyes";
	S1.Classe = "Magicien sombre";
	S1.Force = 4;
	S1.Dexterite = 13;
	S1.Constitution = 12;
	S1.Intelligence = 18;
	S1.Perception = 16;
	S1.Charisme = 16;
	S1.Baguette = 3;
	S1.Livre = 2;
	S1.AfficheStat();
	S1.AfficheDeg();
}
