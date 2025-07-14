#include <bits/stdc++.h>
using namespace std;

int main() {
  int book;
  cin >> book;
  int num, day;
  vector<int> overdue;
  int fine = 0;
  int count = 0;
  for (int i = 0; i < book; i++) {
    cin >> num >> day;
    if (day > 100) {
      fine = fine + ((day-100) * 5);
      overdue.push_back(num);
      count++;
    }
  }
  sort(overdue.begin(), overdue.end());
  int size =  overdue.size();
  if (size == 0) {
    cout << "0";
  } else {
    for (int i = 0; i < count; i++) {
      cout << overdue[i] << " ";
    }
    cout << endl;
    cout << fine;
  }
  
  return 0;
}

