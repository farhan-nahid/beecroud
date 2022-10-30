#include <stdio.h>

int main()
{
    int X,Y;
    float result =0;

    scanf("%d %d", &X, &Y);

    if(X == 1){
       result = 4.00 * Y;
    } else if(X == 2){  
       result = 4.50 * Y;
    } else if(X == 3) {        
        result = 5.00 * Y;
    }  else if(X == 4) {      
        result = 2.00 * Y;
    }  else if(X == 5) {  
        result = 1.50 * Y;
    }

    printf("Total: R$ %.2f\n", result);

    return 0;
}