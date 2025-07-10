#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int face[53] = {0};
  cin >> n;
  int num;
  for (int i = 0; i < n; i++) {
    cin >> num;
    face[num]++;
  }
  int deck = 0;
  int need = 0;
  while (1) {
    int count = 0;
    for (int i = 1; i < 53; i++) {
      if (face[i] >= 1) {
        count++;
        face[i]--;
      }
    }
    if (count / 52 == 1) {
      deck++;
    }
    if (count < 52 && count > 0) {
      need = need + (52 - count);
    }
    if (count == 0) {
      break;
    }
  }
  
  cout << deck << " " << need;
  return 0;
}

