#include <iostream>
#include <Personnage.hpp>

int main ()
{
	Personnage P1;
	P1.Nom = "Nans";
	P1.Classe = "Rodeur";
	P1.Vie = 20;
	P1.Attaque = 6;
	P1.Defence = 4;
	P1.AfficheStat();
}
