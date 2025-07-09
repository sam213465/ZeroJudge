#include <bits/stdc++.h>
using namespace std;

int main() {
  int king, small;
  cin >> king >> small;
  while (1) {
    if (king == 1) {
      break;
    }
    king = king / 2;
    small = small / 2;
  }
  int sum = king + small;
  
  int days = 0;
  while (1) {
    sum = sum / 2;
    if (sum == 0) {
      break;
    }
    days++;
  }
  cout << days;

  
  return 0;
}

