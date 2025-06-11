#include <iostream>
#include <memory>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
  int n;
  cin >> n;
  unordered_map<string, int> mp;
  mp["Tetrahedron"] = 4;
  mp["Cube"] = 6;
  mp["Octahedron"] = 8;
  mp["Dodecahedron"] = 12;
  mp["Icosahedron"] = 20;

  string arr[n];
  int faces = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    faces += mp[arr[i]];
  }

  cout << faces;

  return 0;
}
