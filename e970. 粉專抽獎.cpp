#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int num[n];
  for (int i = 0; i < n; i++) {
    cin >> num[i];
  }
  int sum = 0;
  int base = num[n-1];
  for (int i = 1; i <= n; i++) {
    if (i % base == 1) {
      sum = sum + num[i-1];
    }
  }
  
  int reward = sum % n;
  if (reward == 0) {
    cout << n << " " << num[n-1];
  } else {
    for (int i = 1; i <= n; i++) {
      if (i == reward) {
        cout << i << " " << num[i-1];
      }
    }
  }
  return 0;
}

