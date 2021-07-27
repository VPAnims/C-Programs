#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
string greeting = " Chose a number 5 or 8. \n\n";
cout << greeting;
cout << " Type a number: ";
cin >> x;

if (x == 8){
   cout << " You got it correct! \n\n";
 }
else {
    cout << " You got it wrong. Try again
    5 \n\n";
}
return 0;
}
