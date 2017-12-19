#include <iostream>

using namespace std;

int fib(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return fib(n-1)+fib(n-2);
  }
}

int main() 
{
    int sum = 0;
    int i = 1;
    while(fib(i) < 4000000) {
        if(fib(i) % 2 == 0) {
            sum += fib(i);
        }
        i++;
    }

    cout << sum;

    return 0;
}