#include <bits/stdc++.h>
using namespace std;

int main() {
  int ant, grasshopper; 
           // ³K»g
  int ant_sum = 0;
  int grasshopper_sum = 0;
  int ant_height, grasshopper_height;
  cin >> ant >> grasshopper;
  bool bigthan = false;
  if (ant > grasshopper) {
    bigthan = true;
  }
  for (int i = 0; i < ant; i++) {
    cin >> ant_height;
    ant_sum = ant_sum + ant_height;
  }
  for (int i = 0; i < grasshopper; i++) {
    cin >> grasshopper_height;
    grasshopper_sum = grasshopper_sum + grasshopper_height;
  }
  bool higherthan = false;
  if (ant_sum > grasshopper_sum) {
    higherthan = true;
  }
 
  if (bigthan && higherthan) {
    cout << "Yes";
  } else {
    cout << "No";
  }
  return 0;
}

