#include <iostream>

using namespace std;


int main(){
    int input , odd_number_count = 0;

    cin >> input;

    while(odd_number_count < 6){
        if(input % 2 == 1){
            cout << input << endl;
            odd_number_count +=1;
        }
        input += 1;
    }
}
