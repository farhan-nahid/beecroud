#include <iostream>

using namespace std;

using namespace std;

int main () {

    int A =0, B=0;

    cin >> A >> B;
    
    if(A % B == 0 || B % A == 0){
        cout << "Sao Multiplos" << endl;

    }   else {

        cout << "Nao sao Multiplos" << endl;
    }

    return 0;
}