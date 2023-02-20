// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int A,B;
    scanf("%d", &A);
    scanf("%d", &B);
  
    if((A>=0 && B>=0)){
        if(A > B){
            printf("Argentina\n");
        } else if(B > A) {
              printf( "Brazil\n");
        } else if(A == B){
             printf( "Draw\n");
        }else{
            printf("BUG");
        }
    }

    return 0;
}