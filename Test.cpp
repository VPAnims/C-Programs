#include <iostream>
using namespace std;

int main() {
  int x, y, a;
  int sum;
  cout << "Type a number: ";
  cin >> x;
  cout << "Type another number: ";
  cin >> y;
  cout << "Type another number: ";
  cin >> a;
  sum = x - y * a;
  cout << "Answer is: " << sum;
  return 0;
}
