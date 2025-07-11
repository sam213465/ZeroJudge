#include <bits/stdc++.h>
using namespace std;

int main() {
  int money, howmanystrings, pork, beef;
  cin >> money >> howmanystrings >> pork >> beef;
  bool wrong = true;
  for (int i = 0; i <= howmanystrings; i++) {
    int x = i;
    int y = howmanystrings - i;
    int result = x * pork + y * beef;
    if (result == money) {
      cout << x << " " << y;
      wrong = false;
      break;
    }
  }
  if (wrong) {
    cout << "-1 -1";
  }
  // money = pork * x + beef * y
}

