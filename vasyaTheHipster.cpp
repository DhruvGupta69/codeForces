#include <iostream>
using namespace std;

int main() {

  int red, blue;
  cin >> red >> blue;

  int f = min(red, blue);
  int nf = abs(red - blue) / 2;

  cout << f << " " << nf;

  return 0;
}
