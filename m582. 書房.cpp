#include <bits/stdc++.h>
using namespace std;

int main() {
  int bookshelf, fragments;
  cin >> bookshelf >> fragments;
  int num[bookshelf] = {0};
  vector<vector<int>> order(fragments, vector<int>(2, 0));
  int find = 0;
  for (int i = 0; i < bookshelf; i++) {
    cin >> num[i];
    for (int j = 1; j <= fragments; j++) {
      if (num[i] == j) {
        order[find][1] = i + 1;
        order[find][0] = num[i];
        find++;
      }
    }
  }
  sort(order.begin(), order.end());
  for (int i = 0; i < find; i++) {
    cout << order[i][1] << " ";
  }
  return 0;
}

