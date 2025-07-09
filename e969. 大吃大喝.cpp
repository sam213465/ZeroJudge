#include <bits/stdc++.h>
using namespace std;

int main() {
  int money, eat_time, eat;
  cin >> money >> eat_time >> eat;
  int times = 0;
  while (1) {
    if (money < 32) {
      cout << "Wayne can't eat and drink.";
      break;
    }
    
    if (eat == 1) {
      money = money - 55;
      if (money == 1) {
        cout << times << ": " << "Wayne drinks a Corn soup, and now he has "
             << money << " dollar.";
        break;
      } else if (money > 0 && money < 32) {
        cout << times << ": " << "Wayne drinks a Corn soup, and now he has "
             << money << " dollars.";
        break;
      } else if (money >= 32) {
        eat = 0;
        cout << times << ": " << "Wayne drinks a Corn soup, and now he has "
             << money << " dollars." << endl;
        times = times + eat_time;
      } else if (money == 0) {
        cout << times << ": " << "Wayne drinks a Corn soup,";
        cout << " and now he doesn't have money." << endl;
        break;
      }
    } else if (eat == 0) {
      money = money - 32;
      if (money == 1) {
        cout << times << ": " << "Wayne eats an Apple pie, and now he has "
             << money << " dollar.";
        break;
      } else if (money > 0 && money < 55) {
        cout << times << ": " << "Wayne eats an Apple pie, and now he has " 
             << money << " dollars.";
        break;
      } else if (money >= 55) {
        eat = 1;
        cout << times << ": " << "Wayne eats an Apple pie, and now he has " 
             << money << " dollars." << endl;
        times = times + eat_time;
      } else if (money == 0) {
        cout << times << ": " << "Wayne eats an Apple pie,";
        cout << " and now he doesn't have money." << endl;
        break;
      } 
    }
  }
  
  return 0;
}

