#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sell[n];
  int num[n];
  for (int i = 0; i < n; i++) {
    cin >> sell[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> num[i];
  }
  vector<int> index;
  for (int i = 0; i < n; i++) {
    if (sell[i] == -1) {
      index.push_back(i);
    }
  }

  int size = index.size();
  for (int i = 0; i < size-1; i++) {
    int d = index[i+1] - index[i];
    int big = sell[index[i]+1];
    int big_index = index[i] + 1;
    int small = sell[index[i]+1];
    int small_index = index[i] + 1;  
    for (int j = 1; j < d; j++) {
      if (sell[index[i]+j] > big) {
        big = sell[index[i]+j];
        big_index = index[i]+j;
      }
    }
    for (int k = 1; k < d; k++) {
      if (sell[index[i]+k] < small) {
        small = sell[index[i]+k];
        small_index = index[i]+k;
      }
    }
    int temp = sell[small_index];
    sell[small_index] = sell[big_index];
    sell[big_index] = temp;
    
    temp = num[small_index];
    num[small_index] = num[big_index];
    num[big_index] = temp;
  }
  
  for (int i = 0; i < n; i++) {
    cout << num[i] << " ";
  }
  return 0;
}

