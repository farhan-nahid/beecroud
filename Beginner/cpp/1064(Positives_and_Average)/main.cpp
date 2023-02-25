#include <iostream>

using namespace std;

int main () {
    int count = 0;
    float resultArr [6], total = 0.0;
    for(int i=0; i<6; i++){
       cin >> resultArr[i]; 
        if(resultArr[i] > 0){
            count ++;
        }
    }

    for(auto x: resultArr){
        if(x > 0){
            total +=x;
        }
    }

    cout  << count << " valores positivos" << endl;
    printf("%.1lf\n", total / count);
}