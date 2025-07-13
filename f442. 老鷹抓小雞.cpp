#include <bits/stdc++.h>
using namespace std;

int main() {
  int chicken_sum, eagle, rounds;
  cin >> chicken_sum;
  int chicken[chicken_sum];
  for (int i = 0; i < chicken_sum; i++) {
    cin >> chicken[i];
  }
  cin >> eagle >> rounds;
  int catch_num;
  for (int i = 0; i < rounds; i++) {
    cin >> catch_num;
    for (int j = 0; j < chicken_sum; j++) {
      if (catch_num == chicken[j]) {
        int temp;
        temp = chicken[j];
        chicken[j] = eagle;
        eagle = temp;
      }
    }
  }
  
  for (int i = 0; i < chicken_sum; i++) {
    cout << chicken[i] << " ";
  }
  return 0;
}

