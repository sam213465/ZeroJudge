#include <bits/stdc++.h>
using namespace std;

int main() {
  int people;
  vector<int> id;
  int identity;
  cin >> people;
  for (int i = 0; i < people; i++) {
    cin >> identity;
    id.push_back(identity);
  }
  int out;
  bool iswrong = false;
  cin >> out;
  while (out != 0) {
    id[out - 1] = id[out-1] - 3;
    if (id[out-1] >= -7 && id[out-1] <= -5) {
      iswrong = true;
    }
    cin >> out;
  }
  int size = id.size();
  bool badwin = false;
  if (!iswrong) {
    for (int i = 0; i < size; i++) {
      if (id[i] == -1) {
        badwin = true;
      }
    }
  }
  if (badwin && !iswrong) {
    cout << "Werewolves";
  } else if (!badwin && !iswrong) {
    cout << "Townsfolk";
  } else if (iswrong) {
    cout << "Wrong";
  }
  return 0;
}

