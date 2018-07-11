#include <iostream>
#include <fstream>

using namespace std;

int nagyobb(int a, int b) {
  return (a > b) ? a : b;
}

int main()
{
    ifstream file;
    file.open("szamok.txt");
    int szam[15][15];

    for(int i = 0; i < 15; i++) {
      for(int j = 0; j < 15; j++) {
        file >> szam[i][j];
      }
    }

    int sum = szam[0][0];
    int j = 0;
    for (int i = 1; i < 15; i++) {
      int x;
      if (szam[i][j] > szam[i][j+1]) {
        x = szam[i][j];
      } else {
        x = szam[i][j+1];
        j++;
      }
      sum += x;
    }

    cout << sum;
    return 0;
}