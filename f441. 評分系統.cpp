#include <bits/stdc++.h>
using namespace std;

int main() {
  int question, score;
  cin >> question >> score;
  int correct_answer[question];
  for (int i = 0; i < question; i++) {
    cin >> correct_answer[i];
  }
  int student;
  cin >> student;
  int student_answer[question];
  int grades = 0;
  for (int i = 0; i < student; i++) {
    for (int j = 0; j < question; j++) {
      cin >> student_answer[j];
      if (student_answer[j] == correct_answer[j]) {
        grades = grades + score;
      }
    }
    cout << grades << endl;
    grades = 0;
  }

  return 0;
}

