#include <iostream>

using namespace std;

float calculate_tax(float salary)
{
    float tax = 0.00;

    if(salary >= 2000.01 && salary <=3000.00){
        tax = (salary - 2000.00) * .08;        
    } else if(salary >= 3000.01 && salary < 4500.00){
        tax =  (salary-3000.00) * .18 + 1000.00 * .08;
    } else {
        tax =  (salary-4500.00) *.28 + 1500.00 * .18 + 1000.00 * .08;
    }

    return tax;
}



int main()
{
    float input;

    cin >> input;

    if(input < 2000.00){
        cout << "Isento" << endl;
        return 0;
    }

    float total_tax = calculate_tax(input);

 
    printf("R$ %.2f\n", total_tax);
    

    return 0;
}