#include "iostream"
#include <cstdio>
#include <string>
#include <unordered_map>
using namespace std;

int main() {

  string n, m, l;
  cin >> n >> m >> l;

  unordered_map<char, int> mp;

  while (n > m) {
    cout << "Hello Kitty?";
    n--;
  }

  for (char ch : n) {
    mp[ch]++;
  }

  for (char ch : m) {
    mp[ch]++;
  }

  for (char ch : l) {
    mp[ch]--;
    if (mp[ch] == 0)
      mp.erase(ch);
  }

  if (mp.empty())
    cout << "YES";
  else
    cout << "NO";

  return 0;
}
