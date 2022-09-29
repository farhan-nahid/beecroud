#include <stdio.h>

int main () 

{

	double A , B, C, MEDIA;

	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);

	// Bcause A , B , C er value ek na. tai (A) k 2 diye and (B) k 3 and (C) k 5 diye multiply korte hobe.

 	A = A * 2;
	B = B * 3;
	C = C * 5;

	// jehetu 3 tar value ek na taile 3 diye division na kore 3 , 4 & 5 diye plus kore tarpor division kora lagbe 

	MEDIA = (A + B + C) / (3 + 2 + 5);

	printf("MEDIA = %.1lf\n", MEDIA);

	return 0;
}
