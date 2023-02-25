#include <stdio.h>

int main ()
{
    float number;

    scanf("%f", &number);

    if(number < 0 || number > 100){
        printf("Fora de intervalo\n");
    }
    else if(number >= 0 && number <= 25.00){
        printf("Intervalo [0,25]\n");
    }  else if(number >= 25.01 && number <= 50.00){
        printf("Intervalo (25,50]\n");
    }  else {
        printf("Intervalo (75,100]\n");
    }

    return 0;
}
