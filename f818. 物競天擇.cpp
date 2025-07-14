#include <bits/stdc++.h>
using namespace std;

int main() {
  int lions;
  cin >> lions;
  vector<int> height(lions, 0);
  vector<int> weight(lions, 0);
  for (int i = 0; i < lions; i++) {
    cin >> height[i];
  }
  for (int i = 0; i < lions; i++) {
    cin >> weight[i];
  }
  vector<int> result(lions, 0);
  for (int i = 0; i < lions; i++) {
    result[i] = height[i] * weight[i];
  }
  int small = result[0];
  int small_index = 0;
  for (int i = 1; i < lions; i++) {
    if (result[i] < small) {
      small = result[i];
      small_index = i;
    }
  }
  cout << height[small_index] << " " << weight[small_index];
  
  return 0; 
}

