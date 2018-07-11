#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

const int limit = 28123;

long int d(long int num) {
  int sum = 1;
  for(int i = 2; i <= sqrt(num); i++) {
    if(num % i == 0) {
      sum += i;
      if(i != sqrt(num)) {
        sum += num/i;
      }
    }
  }
  return sum;
}

int main()
{
    //kigyûjtjük a jó számokat a v-be
    vector<int> v;
    for(int i = 1; i <= limit; i++) {
      if (i < d(i)) {
        v.push_back(i);
      }
    }

    vector<int> v2;
    for(int i = 1; i <= limit; i++) {
      v2.push_back(0);
    }

    for(int i = 0; i < v.size(); i++) {
      for(int j = i; j < v.size(); j++) {
        int szam = v[i]+v[j];
        if (szam <= limit) {
          v2[szam-1] = 1;
        }
      }
    }

    int sum = 0;
    for(int i = 1; i <= limit; i++) {
      if(v2[i-1] == 0) {
        sum += i;
      }
    }

    cout << sum;

    return 0;
}