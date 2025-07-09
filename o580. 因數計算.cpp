#include <iostream>
using namespace std;

int main() {
  int left, right;
  cin >> left >> right;
  int right_copy = right;
  int left_copy = left;
  int i = 1;
  int howmanyfactor[100000] = {0};
  while (1) {
    if (left % i == 0) {
      howmanyfactor[left]++;
    }
    if (i == left) {
      left++;
      i = 0;
    }
    if (left > right) {
      break;
    }
    i++;
  }
  int big = howmanyfactor[left_copy];
  int big_index = left_copy;
  for (int j = left_copy+1; j <= right_copy; j++) {
    if (howmanyfactor[j] > big) {
      big = howmanyfactor[j];
      big_index = j;
    }
  }
  cout << big_index << " " << big;
  return 0;
}

