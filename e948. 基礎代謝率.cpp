#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, gender, age;
  double tall, weight;
  cin >> n;
  double bmr;
  for (int i = 0; i < n; i++) {
    cin >> gender;
    if (gender == 0) {
      cin >> age >> tall >> weight;
      bmr = (9.6 * weight) + (1.8 * tall) - (4.7 * age) + 655;
    } else if (gender == 1) {
      cin >> age >> tall >> weight;
      bmr = (13.7 * weight) + (5.0 * tall) - (6.8 * age) + 66;
    }
    cout << fixed << setprecision(2) << bmr << endl;
  }

  
  return 0;
}

