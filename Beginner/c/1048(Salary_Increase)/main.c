#include <stdio.h>
 
int main(int argc, char *argv[]) {
 
    float input = 0.00, total = 0.00, interest_amount = 0.00;
    int readjustment_rate = 0;

    scanf("%f", &input); 

    if(input <=400.00){
        readjustment_rate = 15;
    } else if(input >=400.01 && input <=800.00 ){
        readjustment_rate = 12;     
    } else if(input >=800.01 && input <=1200.00 ){
        readjustment_rate = 10;     
    } else if(input >=1200.01 && input <=2000.00 ){
        readjustment_rate = 7;    
    } else{
        readjustment_rate = 4;
    }

    interest_amount = (input / 100) * readjustment_rate;
    total = input + interest_amount;  

    printf("Novo salario: %.2f\n", total);
    printf("Reajuste ganho: %.2f\n", interest_amount);
    printf("Em percentual: %d %%\n", readjustment_rate);
  
 
    return 0;
}