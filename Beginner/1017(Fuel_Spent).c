#include <stdio.h>
 
int main() {
 
    int hour, speed;
    double result;

    scanf("%d %d", &hour, &speed);

    result = (hour * speed) / 12.0;

    printf("%.3lf\n", result);
 
    return 0;
}