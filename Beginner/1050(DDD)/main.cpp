#include <iostream>

using namespace std;


void print_output(int num){
    if(num == 61){
        cout << "Brasilia" << endl ;
    } else if(num == 71){
        cout << "" << endl ;
    } else if(num == 11){
        cout << "" << endl ;
    } else if(num == 21){
        cout << "" << endl ;
    } else if(num == 32){
        cout << "" << endl ;
    } else if(num == 19){
        cout << "" << endl ;
    } else if(num == 27){
        cout << "" << endl ;
    } else if(num == 31){
        cout << "" << endl ;
    } else{
        cout << "DDD nao cadastrado" << endl;
    }

}

int main (){

    int input ;

    cin >> input;

    print_output(input);

    return 0;
}