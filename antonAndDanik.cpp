#include <iostream>
#include <string>
using namespace std;

int main() {
  int games;
  string winners;
  cin >> games >> winners;

  int anton = 0, danik = 0;
  for (char ch : winners) {
    if (ch == 'A')
      anton++;
    else
      danik++;
  }

  if (anton == danik)
    cout << "Friendship";
  else if (anton > danik)
    cout << "Anton";
  else
    cout << "Danik";

  return 0;
}
