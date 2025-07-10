#include <bits/stdc++.h>
using namespace std;

int main() {
  int num, range;
  cin >> num >> range;
  int first = num - ((1 + range) * (num / (1 + range)));
  if (first <= range && first > 0) {
    cout << "1";
  } else {
    cout << "0";
  }
  return 0;
}

