#include <stdio.h>
 
int main() {
 
    double N;
    int convertToInt, afterPoint, tk100, tk50, tk20, tk10, tk5, tk2, coin1, coin50, coin25, coin10, coin5, coin01;

    scanf("%lf", &N);

    convertToInt =  N;
    afterPoint = (N - convertToInt) * 100;

    tk100 = convertToInt / 100;
    tk50 = (convertToInt % 100) / 50;
    tk20 = ((convertToInt % 100) % 50) / 20;
    tk10 = (((convertToInt % 100) % 50) % 20) / 10;
    tk5 = ((((convertToInt % 100) % 50) % 20) % 10 ) / 5;
    tk2 = (((((convertToInt % 100) % 50) % 20) % 10 ) % 5) /2;
    coin1 = (((((convertToInt % 100) % 50) % 20) % 10 ) % 5) %2;
    coin50 = afterPoint / 50;
    coin25 = (afterPoint % 50) / 25;
    coin10 = ((afterPoint % 50) % 25) / 10;
    coin5 = (((afterPoint % 50) % 25) % 10) / 5;
    coin01 = (((afterPoint % 50) % 25) % 10) % 5;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", tk100);
    printf("%d nota(s) de R$ 50.00\n", tk50);
    printf("%d nota(s) de R$ 20.00\n", tk20);
    printf("%d nota(s) de R$ 10.00\n", tk10);
    printf("%d nota(s) de R$ 5.00\n", tk5);
    printf("%d nota(s) de R$ 2.00\n", tk2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", coin1);
    printf("%d moeda(s) de R$ 0.50\n", coin50);
    printf("%d moeda(s) de R$ 0.25\n", coin25);
    printf("%d moeda(s) de R$ 0.10\n", coin10);
    printf("%d moeda(s) de R$ 0.05\n", coin5);
    printf("%d moeda(s) de R$ 0.01\n", coin01);

    return 0;
}