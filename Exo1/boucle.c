#include <stdlib.h>
#include <stdio.h>
#include "boucle.h"

void BoucleFor(int n)
{
	unsigned short somme1 = 0;
	for (int k1 = 1; k1 <= n; k1++)
	{
		somme1 = somme1 + k1;
	}
	printf("La somme des %d premiers entiers avec la methode 1 est %d\n", n, somme1);
}

void BoucleWhile(int n)
{
	unsigned short somme2 = 0;
	int k2 = 1;
	while (k2 <= n)
	{
		somme2 = somme2 + k2;
		k2 = k2 + 1;
	}
	printf("La somme des %d premiers entiers avec la methode 2 est %d\n", n, somme2);
}

void BoucleDoWhile(int n)
{
	unsigned short somme3 = 0;
	int k3 = 1;
	do
	{
		somme3 = somme3 + k3;
		k3 = k3 + 1;
	} while (k3 < n + 1);

	printf("La somme des %d premiers entiers avec la methode 3 est %d\n", n, somme3);
}

void SansDepassement(int n)
{
	unsigned short somme4 = 0;
	int k4 = 1;
	while ((k4 <= n) && (USHRT_MAX - somme4 >= k4))
	{
		somme4 = somme4 + k4;
		k4 = k4 + 1;
	}
	printf("La somme des %d premiers entiers sans dépassement est %d avec %d le dernier entier ajoute\n", n, somme4, (k4-1));
}

int main() {
	unsigned short n=362; //On fixe n tel qu'il est plus grand que le seuil pour pouvoir
	//rentrer au moins une fois dans la boucle while.
	printf("Rentrez une valeur de n:");
	while (n>361) //Si le n rentré par l'utilisateur est plus grand que ce seuil, on ne fait rien.
	scanf_s("%hu", &n); //n est le nombre d'entiers successifs que l'on additionne
	//Méthode 1 : boucle for//
	BoucleFor(n);

	//Méthode 2 : boucle while//
	BoucleWhile(n);

	//Méthode 3 : boucle do while//
	BoucleDoWhile(n);


// Calcul du n maximal sans dépassement de capacité //
//La somme peut prendre des valeurs entre 0 et 65 535 car elle est codée sur 2 octets.//
	SansDepassement(n);





}


