#include <stdlib.h>
#include <stdio.h>

int main() {
	float a = 0.00;
	float b = 0.00;
	float c = 0.00;
	scanf_s("Rentrez les dimensions de votre bagage : %f", a);
	scanf_s("Rentrez les dimensions de votre bagage : %f", b);
	scanf_s("Rentrez les dimensions de votre bagage : %f", c);
	printf("Les dimensions sont %f %f %f", a, b, c);

	// Fonction permuter 2 valeurs x et y tq x>y //
	//void
	float x;
	float y;
	if (x<y)
	{
		float temporaire;
		temporaire = y;
		y = x;
		x = temporaire;
	}

}