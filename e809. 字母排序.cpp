#include <bits/stdc++.h>
using namespace std;

int main() {
  string rule, needsort;
  cin >> rule >> needsort;
  int line;
  cin >> line;
  int rule_len = rule.length();
  int needsort_len = needsort.length();
  vector<char> result;
  for (int i = 0; i < rule_len; i++) {
    for (int j = 0; j < needsort_len; j++) {
      if (rule[i] == needsort[j]) {
        result.push_back(needsort[j]);
      }
    }
  }
  for (int i = 0; i < line; i++) {
    int assignline;
    cin >> assignline;
    cout << result[assignline-1] << endl;
  }
  
  return 0;
}

