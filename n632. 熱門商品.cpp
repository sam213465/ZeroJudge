#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int questions, stores;
  int question_num, commodity, commodity_num;
  cin >> questions >> stores;
  int favorite[10000] = {0}; 
  for (int i = 0; i < questions; i++) {
    cin >> question_num;
    favorite[question_num]++;
  }
  vector<vector<int>> store;
  for (int i = 0; i < stores; i++) {
    cin >> commodity;
    store.push_back({commodity, 0});
  }
  int big = favorite[0];
  int big_index;
  for (int i = 0; i < 10000; i++) {
    if (favorite[i] > big) {
      big = favorite[i];
      big_index = i;
    }
  }
  vector<int> exist;
  int howmanyfavorite = 0;
  for (int i = 0; i < 10000; i++) {
    if (favorite[i] > 0) {
      for (int j = 0; j < favorite[i]; j++) {
        exist.push_back(i);
        howmanyfavorite++;
      }
    }
  }
  int favorite_commdity;
  int count = 0;
  for (int i = 0; i < stores; i++) {
    for (int j = 0; j < store[i][0]; j++) {
      cin >> commodity_num;
      if (commodity_num == big_index) {
        favorite_commdity = commodity_num;
      } 
      for (int k = 0; k < howmanyfavorite; k++) {
        if (commodity_num == exist[k]) {
          count++;
        }
      }
    }
    store[i][1] = count;
    count = 0;
  }
  int notfamous = store[0][1];
  int notfamous_store = 1;
  for (int i = 1; i < stores; i++) {
    if (store[i][1] < notfamous) {
      notfamous = store[i][1];
      notfamous_store = i+1;
    }
  }
  cout << favorite_commdity << " " << notfamous_store;
  return 0;
}

