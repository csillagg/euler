#include <iostream>

using namespace std;

unsigned long long int rule(unsigned long long int num) {
  return (num % 2 == 0) ? num/2 : 3*num+1;
}

int main()
{
    int szam;
    int maxdb = 0;
    int db = 0;
    unsigned long long int c;
    for (int i = 2; i < 1000000; i++) {
      c = i;
      db = 0;
      while(c != 1) {
        c = rule(c);
        db++;
      }
      if (db > maxdb) {
        maxdb = db;
        szam = i;
      }
    }
    cout << maxdb <<"    " << szam;
    return 0;
}