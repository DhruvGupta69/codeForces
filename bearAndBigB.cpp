#include <iostream>
using namespace std;

int main() {
  int limak, bob;
  cin >> limak >> bob;

  int years = 0;
  while (limak <= bob) {
    years++;
    limak *= 3;
    bob *= 2;
  }

  cout << years;

  return 0;
}
