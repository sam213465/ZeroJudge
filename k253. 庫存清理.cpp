#include <bits/stdc++.h>
using namespace std;

int main() {
  int stock, client, sell;
  cin >> stock >> client >> sell;
  int stock_eightypercent = stock * 0.8;
  int stock_sixtypercent = stock * 0.6;
  int stock_fourtypercent = stock * 0.4;
  int stock_twentypercent = stock * 0.2;
  
  int eighty_to_one = stock - stock_eightypercent + 1;
  int sixty_to_eighty = stock_eightypercent - stock_sixtypercent;
  int fourty_to_sixty = stock_sixtypercent - stock_fourtypercent;
  int twenty_to_fourty = stock_fourtypercent - stock_twentypercent;
  
  int money = 0;
  int result = 0;
  while (client > 0) {
    if (stock >= stock_eightypercent) {
      result = sell * 0.5;
      client = client - eighty_to_one;
      if (client < 0) {
        money = money + (result * (client + eighty_to_one));
        break;
      }
      stock = stock - eighty_to_one;
      money = money + (result * eighty_to_one);
    } else if (stock >= stock_sixtypercent && stock < stock_eightypercent) {
      client = client - sixty_to_eighty;
      stock = stock - sixty_to_eighty;
      result = sell * 0.6;
      if (client < 0) {
        money = money + (result * (client + sixty_to_eighty));
        break;
      }
      money = money + (result * sixty_to_eighty);
    } else if (stock >= stock_fourtypercent && stock < stock_sixtypercent) {
      client = client - fourty_to_sixty;
      stock = stock - fourty_to_sixty;
      result = sell * 0.8;
      if (client < 0) {
        money = money + (result * (client + fourty_to_sixty));
        break;
      }
      money = money + (result * fourty_to_sixty);
    } else if (stock >= stock_twentypercent && stock < stock_fourtypercent) {
      client = client - twenty_to_fourty;
      stock = stock - twenty_to_fourty;
      result = sell * 0.9;
      if (client < 0) {
        money = money + (result * (client + twenty_to_fourty));
        break;
      }
      money = money + (result * twenty_to_fourty);
    } else {
      client = 0;
      money = money + 0;
    }
  }
  
  cout << money;
  return 0;
}

