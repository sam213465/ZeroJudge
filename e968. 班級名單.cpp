#include <bits/stdc++.h>
using namespace std;

int main() {
  int student; 
  cin >> student;
  int absent[3] = {0};
  for (int i = 0; i < 3; i++) {
    cin >> absent[i];
  }
  for (int i = student; i > 0; i--) {
    if (i != absent[0]) {
      if (i != absent[1]) {
        if (i != absent[2]) {
          cout << "No. " << i << endl; 
        }
      }
    }
  }
  
  return 0;
}

