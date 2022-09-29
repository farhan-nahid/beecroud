#include <stdio.h>

int main () 

{

	float A , B, MEDIA;

	scanf("%f", &A);
	scanf("%f", &B);

	// Bcause A & B er value ek na. tai (A) k 3.5 diye and (B) k 7.5 diye multiply korte hobe.

 	A = A * 3.5;
	B = B * 7.5;

	// jehetu 2 tar value ek na taile 2 diye division na kore 3.5 & 7.5 diye plus kore tarpor division kora lagbe 

	MEDIA = (A + B) / (3.5 + 7.5);

	printf("MEDIA = %.5f\n", MEDIA);

	return 0;
}
