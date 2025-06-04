#include <iostream>
using namespace std;

int main() {
  int friends, fence;
  cin >> friends >> fence;

  int heights[friends];
  int width = 0;

  for (int i = 0; i < friends; i++) {
    cin >> heights[i];
    if (heights[i] <= fence)
      width++;
    else
      width += 2;
  }

  cout << width;

  return 0;
}
