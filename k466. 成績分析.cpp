#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, c;
  cin >> n >> c;
  int grades[n][c];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < c; j++) {
      cin >> grades[i][j];
    }
  }
  int d[n][c-1] = {0};
  int dif = 0;
  int sum = 0;
  int up[n] = {0};
  int down[n] = {0};
  int exist_dif = 0;
  int exist_sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < c-1; j++) {
      d[i][j] = grades[i][j] - grades[i][j+1];
      if (d[i][j]> 0) {
        dif = dif + d[i][j];
        exist_dif = 1;
      } else {
        sum = sum + d[i][j];
        exist_sum = 1;
      }
    }
    if (!exist_sum) {
      up[i] = 0;
    } else {
      up[i] = sum;
      exist_sum = 0;
    }
    
    if (!exist_dif) {
      down[i] = 0;
    } else {
      down[i] = dif;
      exist_dif = 0;
    }
    dif = 0;
    sum = 0;
  }
  
  int big = -up[0];
  int big_index = 1;
  for (int i = 1; i < n; i++) {
    if (-up[i] > big) {
      big = -up[i];
      big_index = i+1;
    }
  }

  int small = down[0];
  int small_index = 1;
  for (int i = 1; i < n; i++) {
    if (down[i] > small) {
      small = down[i];
      small_index = i+1;
    }
  }
  
  cout << big_index << endl << small_index;
    return 0;
}

