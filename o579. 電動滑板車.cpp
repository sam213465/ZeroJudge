#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  int project1 = 299;
  int project2 = 699;
  int noproject = 3;
  if (t <= 300) {
    noproject = noproject * t;
    if (noproject < project1) {
      cout << noproject;
    } else {
      cout << project1;
    }
  } else if (t <= 750 && t > 300) {
    project1 = project1 + ((t - 300) * 3);
    noproject = noproject * t;
    if (project1 < noproject && project1 < project2) {
      cout << project1;
    } else if (project2 < noproject && project2 < project1) {
      cout << project2;
    } else {
      cout << noproject;
    }
  } else if (t > 750) {
    project1 = project1 + ((t - 300) * 3);
    project2 = project2 + ((t - 750) * 3);
    noproject = noproject * t;
    if (project1 < noproject && project1 < project2) {
      cout << project1;
    } else if (project2 < noproject && project2 < project1) {
      cout << project2;
    } else {
      cout << noproject;
    }
  }

    return 0;
}

