#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

int product(int t[], int n) {
  int p = 1;
  for (int i = 0; i < n; i++) {
    p *= t[i];
  }
  return p;
}

int main()
{
    ifstream inp("input.txt");
    int szamok[1000];
    char szam;
    for (int i = 0; i < 1000; i++) {
      inp >> szam;
      szamok[i] = szam - '0';
    }

    long long int max_prod = 0;
    for (int i = 0; i <= 987; i++) {
      long long int p = 1;
      for (int j = i; j < i+13; j++) {

        p *= szamok[j];
      }
      cout << i << ". " << p << endl;
      if (p > max_prod) {
        max_prod = p;
      }
    }

    cout << max_prod;
    return 0;
}