#include <bits/stdc++.h>
using namespace std;

int main() {
  int a1, b1, c1;
  int a2, b2, c2;
  cin >> a1 >> b1 >> c1;
  cin >> a2 >> b2 >> c2;
  int n;
  cin >> n;
  int y1, y2;
  vector<int> result;
  for (int i = 0; i <= n; i++) {
    y1 = a1 * i * i + b1 * i + c1;
    y2 = a2 * (n-i) * (n-i) + b2 * (n-i) + c2;
    int sum = y1 + y2;
    result.push_back(sum);
  }
  sort(result.begin(), result.end());
  int size = result.size();
  cout << result[size-1];
  
  return 0;
}

