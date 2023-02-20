#include <stdio.h>
#include <string.h>

int func (){
     char S1[5], S2[5];
     scanf("%s", &S1);
     scanf("%s", &S2);
      printf("%s S1=====\n", S1);
       printf("%s S2=====\n", S2);
            if(S1 < S2){
                printf("Argentina\n");
            } else if(S2 < S1){
                printf("Brazil\n");
            } else{
                func();
            }
    return 0;
}

int main() {
    int A,B;
 
    scanf("%d %d", &A, &B);
  
    if((A>=0 && B>=0)){
        if(A > B){
            printf("Argentina\n");
        } else if(B > A) {
            printf("Brazil\n");
        } else{
          
          func();
            
        }
    }

    return 0;
}

