#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, a, b, c;
  cin >> n;
  for (int i = 0; i < n; i++) {
    bool hasfreespace = false;
    cin >> a >> b >> c;
    for (int j = a+1; j < b; j++) {
      if (j % c != 0) {
        cout << j << " ";
        hasfreespace = true;
      }
    }
    if (!hasfreespace) {
      cout << "No free parking spaces.";
    }
    cout << endl;
  }
  
  return 0;

}

