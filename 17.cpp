#include <iostream>

using namespace std;

int egyjegyu(int szam) {
  int ered;
  if (szam == 1 || szam == 2 || szam == 6) {
    ered = 3;
  } else if (szam == 4 || szam == 5 || szam == 9) {
    ered = 4;
  } else if (szam == 7 || szam == 8 || szam == 3) {
    ered = 5;
  }
  return ered;
}

int ketjegyu (int szam) {
  int ered;
  if (szam == 10) {
    ered = 3;
  } else if (szam == 20 || szam == 30 || szam == 80 || szam == 90 || szam == 11 || szam == 12) {
    ered = 6;
  } else if (szam == 70 || szam == 15 || szam == 16) {
    ered = 7;
  } else if (szam == 40 || szam == 50 || szam == 60){
    ered = 5;
  } else if (szam == 13 || szam == 14 || szam == 18 || szam == 19) {
    ered = 8;
  } else if (szam == 17) {
    ered = 9;
  } else {
    int a = szam % 10;

    if (szam - a == 20 || szam - a == 30 || szam - a == 80 || szam - a == 90) {
      ered = 6 + egyjegyu(a);
    } else if (szam - a == 70) {
      ered = 7 + egyjegyu(a);
    } else if (szam - a == 40 || szam - a == 50 || szam - a == 60) {
      ered = 5 + egyjegyu(a);
    }

  }
  return ered;
}

int haromjegyu (int szam) {
  int ered;

  if (szam % 100 == 0) {
        ered = egyjegyu(szam/100) + 7;
      } else {
        int a = szam % 100;
        ered = egyjegyu((szam-a)/100) + 7 + ketjegyu(a) + 3;
      }

  return ered;
}


int main()
{
    int ered = 0;

    for (int i = 1; i <= 9; i++) {
      ered += egyjegyu(i);
    }

    for (int i = 10; i <= 99; i++) {
      ered += ketjegyu(i);
    }

    for (int i = 100; i <= 999; i++) {
      ered += haromjegyu(i);
    }

    cout << ered + 11;


    return 0;
}