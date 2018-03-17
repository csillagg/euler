#include <iostream>
#include <math.h>


using namespace std;

long long int triNum(int n) {
  return (n*(n+1))/2;
}

int numOfDiv (long long int n) {
  int db = 0;
  for (int i = 1; i < sqrt(n); i++) {
    if (n % i == 0) {
      db+=2;
    }
  }
  if (n % int(sqrt(n)) == 0) {
    db++;
  }
  return db;
}

int main()
{
    bool van = false;
    int i = 1;
    while (!van) {
      if(numOfDiv(triNum(i)) > 500) {
        van = true;
      }
      i++;
    }

    cout << triNum(i-1);
    return 0;
}
