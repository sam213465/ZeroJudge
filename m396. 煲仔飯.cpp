#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, go, wait, eat, back;
  cin >> t >> go >> wait >> eat >> back;
  int sum = go + wait + eat + back;
  if (t < sum) {
    cout << "-1";
  } else {
    cout << sum;
  }
  return 0;
}

