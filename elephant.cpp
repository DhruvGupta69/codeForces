#include <iostream>
using namespace std;

int main() {
  int cordinate;
  cin >> cordinate;

  int moves = cordinate / 5;
  if (cordinate % 5 != 0) {
    moves++;
  }

  cout << moves;
  return 0;
}
