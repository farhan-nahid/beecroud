#include <stdio.h>
 
int main() {
 
    int pd1Code, pd2Code, pd1Unit, pd2Unit;
    float pd1Price, pd2Price, total;

    scanf("%d", &pd1Code);
    scanf("%d", &pd1Unit);
    scanf("%f", &pd1Price);

    scanf("%d", &pd2Code);
    scanf("%d", &pd2Unit);
    scanf("%f", &pd2Price);

    total = (pd1Unit * pd1Price) + (pd2Price * pd2Unit);
 
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}