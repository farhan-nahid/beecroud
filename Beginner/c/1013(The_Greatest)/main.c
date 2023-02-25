
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int a, b, c, AB, AC, BC;
  
  scanf("%d %d %d", &a, &b, &c);
  
  AB = (a+b+abs(a-b))/2;
  
  if(AB == a){
    AC = (a+c+abs(a-c))/2;
    printf("%d", AC);
    printf(" eh o maior\n");
  }
  
  else
  {
    BC = (b+c+abs(b-c))/2;
    printf("%d", BC);
    printf( " eh o maior\n");
  }
  
  return 0;
}