# Projet-C++
Projet classe personnage C++

Le but de notre projet est la réalisation d'un jeu de rôle classique entre plusieurs personnages et de pouvoir effectuer des combats entre eux.

On retrouve ainsi les classes suivant : - Combattant
                                        - Magicien
                                        - Rodeur

Dans chaque classe on retrouve 2 personnages differents : - Guerrier et Paladin pour la classe Combatant
                                                          - Magicien Elementaire et Magicien Sombre pour la classe Magicien
                                                          - Voleur et Archer pour la classe Rodeur

Chaque personnage posséde plusieurs carractéristiques en fonction de leur classe ainsi que de leur type.
Il posséde aussi des points d'attaques ainsi que des points de vie.
Lors d'un combat, on choisi la classe qui s'affronte avec ces 2 personnages à l'interieur.
Les attaques se deroulent les unes apres les autres jusqu'à que l'un des personnages meurt (c'est à dire que ses points de vie sont égales à 0). Ainsi l'autre personnage gagne le combat.

Explication du code :

On retrouve un architecture de code avec un "main" pour le combat entre les personnages, un fichier cpp et hpp pour chaque classe avec à l'interieur la description de chaque personnage ainsi que ces caracteristiques, un fichier "personnage.hpp" regroupant la declaration de caracteristique pour un personnage et un fichier "Cmakelist" pour la compilation de tous les autres fichiers.

