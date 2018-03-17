#include <iostream>
#include <fstream>
#include <stack>

using namespace std;

string str_sum(string num1, string num2) {
  string eredmeny;
  bool e = false;
  if (num1.length() == num2.length()) {
    e = true;
  }
  char elso1 = num1.at(0);
  char elso2 = num2.at(0);
  int dif;
  if (num1.length() >= num2.length()) {
    eredmeny = num1;
    dif = num1.length()-num2.length();
    for (int i = 1; i <= dif; i++) {
      num2.insert(0, "0");
    }
  } else {
    eredmeny = num2;
    dif = num2.length()-num1.length();
    for (int i = 1; i <= dif; i++) {
      num1.insert(0, "0");
    }
  }
  for (int i = 1; i <= dif; i++) {

  }
  int maradek = 0;
  for (int i = num1.length()-1; i >= 0 ; i--) {
    int szamjegy1 = num1.at(i) - '0';
    int szamjegy2 = num2.at(i) - '0';
    int uj_szamjegy = (szamjegy1+szamjegy2+maradek) % 10 ;
    cout << uj_szamjegy << endl;
    eredmeny.at(i) = uj_szamjegy + '0' ;
    if (szamjegy1 + szamjegy2 + maradek >= 10) {
      maradek = 1;
    } else {
      maradek = 0;
    }
  }
  if ((((elso1 - '0' + elso2 - '0') >= 10) && e) || eredmeny.at(0) == '0') {
    eredmeny.insert(0, "1");
  }
  return eredmeny;
}

int main()
{

    ifstream k("inp.txt");
    string str1;
    string str2;
    k >> str1 >> str2;
    string eredmeny = str_sum(str1, str2);

    for(int i = 1; i < 99; i++) {
      k >> str1;
      str2 = str_sum(eredmeny, str1);
      eredmeny = str2;
      cout << eredmeny << endl;
    }


    cout << eredmeny;


    return 0;
}
