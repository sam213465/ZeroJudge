#include <iostream>
using namespace std;

int main() {
  int student;
  cin >> student;
  int chinese_score[1000] = {0};
  int math_score[1000] = {0};
  for (int i = 0; i < student; i++) {
    cin >> chinese_score[i];
  }
  
  for (int i = 0; i < student; i++) {
    cin >> math_score[i];
  }
  
  int exist = 0;
  for (int i = 0; i < student; i++) {
    if (chinese_score[i] > math_score[i]) {
      exist = 1;
      cout << i+1 << " " ;
    }
  }
  
  if (!exist) {
    cout << "-1";
  }
  
  cout << endl;
  exist = 0;
  for (int i = 0; i < student; i++) {
    if (chinese_score[i] < math_score[i]) {
      exist = 1;
      cout << i+1 << " " ;
    }
  }
  if (!exist) {
    cout << "-1";
  }
    return 0;
}

