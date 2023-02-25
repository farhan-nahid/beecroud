#include <stdio.h>
 
int main() {
    int days, year, month, day;

    scanf("%d", &days);

    year = days / 365;
    month = (days % 365) / 30;
    day = days %  365 % 30;

    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)\n", day);

     	


 
    return 0;
}