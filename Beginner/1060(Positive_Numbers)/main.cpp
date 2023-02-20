#include <iostream>

using namespace std;

int main () {
    int resultArr [6], count = 0;

    for(int i=0; i<6; i++){
       cin >> resultArr[i]; 
        if(resultArr[i] > 0){
            count ++;
        }
    }

    cout << count << " valores positivos" << endl;

   
}