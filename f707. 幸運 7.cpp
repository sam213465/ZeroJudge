#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> num;
  while (1) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    num.push_back(n);
  }
  int size = num.size();
  vector<int> divisible;
  vector<int> notdivisible;
  bool hasdivisible = false;
  bool hasnotdivisible = false;
  for (int i = 0; i < size; i++) {
    if (num[i] % 7 == 0) {
      divisible.push_back(num[i]);
      hasdivisible = true;
    } else {
      notdivisible.push_back(num[i]);
      hasnotdivisible = true;
    }
  }
  int divisible_size = divisible.size();
  vector<int> result1(divisible_size, 0);
  int notdivisible_size = notdivisible.size();
  vector<int> result2(notdivisible_size, 0);
  for (int i = 0; i < divisible_size; i++) {
    result1[i] = divisible[i] % 70;
  }
  int big = result1[0];
  int big_index = 0;
  for (int i = 1; i < divisible_size; i++) {
    if (result1[i] > big) {
      big = result1[i];
      big_index = i;
    }
  }
  for (int i = 0; i < notdivisible_size; i++) {
    result2[i] = notdivisible[i] % 77;
  }
  int small = result2[0];
  int small_index = 0;
  for (int i = 1; i < notdivisible_size; i++) {
    if (result2[i] < small) {
      small = result2[i];
      small_index = i;
    }
  }
  
  if (hasdivisible && hasnotdivisible) {
    cout << divisible[big_index];
  } else if (!hasdivisible && hasnotdivisible) {
    cout << notdivisible[small_index];
  } else if (hasdivisible && !hasnotdivisible) {
    cout << divisible[big_index];
  }
  return 0;
}

