#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, x1, x2, y1, y2;
  cin >> k >> x1 >> y1 >> x2 >> y2;
  int location = 0;
  while (1) {
    location = location + k;
    if (location % x1 == 0 && location % x2 == 0) {
      k = k - y1 - y2;
    } else if (location % x2 == 0) {
      k = k - y2;
    } else if (location % x1 == 0) {
      k = k - y1;
    } 
    if (k <= 0) {
      break;
    }
  }
  cout << location;
  return 0;
}

