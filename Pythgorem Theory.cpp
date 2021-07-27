#include <iostream>
using namespace std;

int main(){
int a, b, c, e, d, f;
cout << " Pythagorean Theory Calculator \n\n";
cout << " Type the hypotenuse: ";
cin >> c;
d = c*c;
cout << " \n\n Type angle A: ";
cin >> a;
f = a*a;
cout << " \n\n Type angle B: ";
cin >> b;
e = b*b;
if ( d == f + e){
    cout << " \n\n Congrats! Your Triangle is ..... A Triangle! \n\n";
}
else {
    cout << "\n\n Congrats! Your Triangle is ..... Is not a Triangle! \n\n";
}
}
