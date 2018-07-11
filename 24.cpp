#include <iostream>

using namespace std;

const int limit = 1000000;

long int factorial(int n) {
  long int f = 1;
  for (int i = 2; i <= n; i++) {
    f *= i;
  }
  return f;
}


int main()
{
    int osztando = limit-1;
    int szamok[10];
    for(int i = 0; i <10; i++) {
      szamok[i] = i+1;
    }

    for(int i = 10; i >0 ; i--) {
      int hanyados = (int)(osztando/factorial(i-1));
      osztando -= hanyados*factorial(i-1);
      int k = 1;
      while(hanyados != 0) {
        if(szamok[k] ==0) {
          k++;
        } else {
          hanyados--;
          k++;
        }
      }
      cout <<szamok[k-1]-1;
      szamok[k-1] = 0;
    }

    return 0;
}
