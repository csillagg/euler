#include <iostream>

using namespace std;

int power(int num, int p) {
  int res = 1;
  for(int i = 1; i <= p; i++) {
      res *= num;
  }
  return res;
}

int sumOfPow(int num) {
  int sum = 0;
  do {
    int digit = num % 10;
    sum += power(digit, 5);
    num /= 10;
  } while (num > 0);
  return sum;
}

int main()
{
    int sum = 0;
    for(int i = 2; i < 350000; i++) {
      if(sumOfPow(i) == i) {
        sum += i;
      }
    }

    cout <<sum;
    return 0;
}
