#include <iostream>
#include <Personnage.hpp>

int main ()
{
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
}
