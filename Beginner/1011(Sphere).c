#include <stdio.h>

int main() {
 int R;
 double pi = 3.14159, result;

 scanf("%d", &R);


//  result = (4/3.0) * pi * (R * R * R);

 result = ((4/3.0) * pi * R * R *R);
 printf("VOLUME = %.3lf\n", result); 
 
 return 0;
}