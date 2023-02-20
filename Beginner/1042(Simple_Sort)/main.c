#include <stdio.h>

int main ()
{
    int myArr[3] = {1,2,3}, sortedArr[3];

    // for(int i=0; i<3; i++)
    // {
    //     scanf("%d", &myArr[i]);
    // }

    for(int i=0; i<3; i++)
    {
       
     printf("%d\n", myArr[i]);
     if(myArr[i] >  myArr[i +1]){
        printf("%d\n", myArr[i]);
        sortedArr[i] = myArr[i];
     }else{
        printf("%d\n", myArr[i]);
     }
    
    }

    //  for(int i=0; i<3; i++)
    // {
    //     printf("%d\n", sortedArr[i]);
    // }
    
}