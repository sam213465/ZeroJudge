#include <iostream>
using namespace std;

int main() {
  int n;
  int sum = 0;
  cin >> n;
  int howmanyrounds = 1;
  while (1) {
    for (int i = 1; i < 5; i++) {
    sum = sum + (1 * howmanyrounds);
    if (sum >= n) {
      if (i == 1) {
        cout << "Pen";
        break;
      } else if (i == 2) {
        cout << "Pineapple";
        break;
      } else if (i == 3) {
        cout << "Apple";
        break;
      } else {
        cout << "Pineapple pen";
        break;
      }
    }
  }
  howmanyrounds++;
  if (sum >= n) {
    break;
  }
}
  return 0;
}

