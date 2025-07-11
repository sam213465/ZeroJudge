#include <bits/stdc++.h>
using namespace std;


int main() {
  string str;
  cin >> str;
  int len = str.length();
  bool isletters = false;
  int count = 0;
  for (int i = 0; i < len; i++) {
    if (str[i] == 'A') {
      count++;
    } else if (str[i] == 'H' || str[i] == 'I') {
      count++;
    } else if (str[i] == 'M' || str[i] == 'O') {
      count++;
    } else if (str[i] >= 'T' && str[i] <= 'Y') {
      count++;
    }
  }
  if (count == len) {
    isletters = true;
  }
  count = 0;
  bool ismirror = false;
  for (int i = 0; i < len / 2; i++) {
    if (str[i] == str[len-i-1]) {
      count++;
    }
  }
  if (count == len / 2) {
    ismirror = true; 
  } else if (len == 1) {
    ismirror = true;
  }
  if (ismirror && isletters) {
    cout << "Yes";
  } else {
    cout << "No";
  }
  return 0;
}

