#include <bits/stdc++.h>
using namespace std;

bool Issquarenumber(int num) {
  int i = 1;
  while (1) {
    if (num / i == i && num % i == 0) {
      return true;
    }
    i++;
    if (i == num) {
      break;
    }
  }
  return false;
}
int main() {
  int n, room;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> room;
    if (room % 3 == 0 && room % 2 == 0) {
      cout << "1" << " ";
    } else if (room % 2 != 0 && room % 3 != 0) {
      cout << "2" << " ";
    } else if (room % 2 == 0 && room % 7 != 0) {
      cout << "3" << " ";
    } else if (Issquarenumber(room)) {
      cout << "3" << " ";
    } else {
      cout << "0" << " ";
    }
  }
  return 0;
}

