#include <iostream>
#include <string>

using namespace std;

string double_num (string num) {
  string eredmeny;
  int maradek = 0;
  if (num.at(0) >= '5') {
    //num.insert(0, "0");
    eredmeny = num;
    for (int i = num.length()-1; i >= 0 ; i--) {
      int szamjegy = num.at(i) - '0';
      int uj_szamjegy = (szamjegy*2+maradek) % 10 ;
       eredmeny.at(i) = uj_szamjegy + '0' ;
      if (szamjegy >= 5) {
        maradek = 1;
      } else {
        maradek = 0;
      }
      }
    eredmeny.insert(0, "1");

  } else {
    eredmeny = num;
    for (int i = num.length()-1; i >= 0 ; i--) {
      int szamjegy = num.at(i) - '0';
      int uj_szamjegy = (szamjegy*2+maradek) % 10 ;
       eredmeny.at(i) = uj_szamjegy + '0' ;
       if (szamjegy >= 5) {
        maradek = 1;
       } else {
         maradek = 0;
       }
    }

  }
  return eredmeny;
}

int count_num (string num) {
  int c = 0;
  for (int i = 0; i < num.length(); i++) {
    int szamjegy = num.at(i) - '0';
    c+=szamjegy;
  }
  return c;
}

int main()
{
    string szam = "2";
    string eredmeny = szam;
    for (int i = 1; i <= 999; i++) {
      eredmeny = double_num(szam);
      szam = eredmeny;
    }

    cout << count_num(szam);

    return 0;
}