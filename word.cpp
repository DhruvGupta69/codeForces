#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string input;
  cin >> input;

  int upper = 0, lower = 0;
  for (auto letter : input) {
    if (isupper(letter))
      upper++;
    else
      lower++;
  }

  if (upper == lower)
    transform(input.begin(), input.end(), input.begin(), ::tolower);
  else if (upper > lower)
    transform(input.begin(), input.end(), input.begin(), ::toupper);
  else
    transform(input.begin(), input.end(), input.begin(), ::tolower);

  cout << input;

  return 0;
}
