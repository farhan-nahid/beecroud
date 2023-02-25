#include <iostream>

using namespace std;

void print_by_order(int a, int b, int c){
   int min, mid, max;

   if(a>b && a>c){
      max = a;
      if(b>c)  {
         mid = b;
         min = c;
      }  else  {
         mid = c;
         min = b;
      }
   } else if(b>a && b>c){
      max = b;
      if(a>c)  {
         mid = a;
         min = c;
      }  else  {
         mid = c;
         min = a;
      }
   } else  {
      max = c;
      if(a>b)  {
         mid = a;
         min = b;
      }  else  {
         mid = b;
         min = a;
      }
   }
   cout << min << endl << mid << endl << max << endl << endl;
}

int main (){
   int a, b, c;

   cin >> a >> b >> c;
   print_by_order(a, b, c);

   cout << a << endl << b<< endl << c<< endl;

   return 0;
}

