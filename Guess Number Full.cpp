 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 #include <iostream>
 #include <string>
 using namespace std;

 void myVersion1(){

    int x, y;
  int iSecret;
  srand (time(NULL));
  iSecret = rand() % 10 + 1;
  cout << "Guess the Number. 1 through 10 \n\n";
cout << "Type a number here to guess: ";
cin >> x;
cout << "Type another number here to guess: ";
cin >> y;
 if ( x == iSecret) {
   cout << " \n\n You first guess is correct!\n\n";
 }
else
    {
    cout << " \n\n Your first guess is wrong :( try again next time. \n\n";
}
if ( y  == iSecret) {
    cout << "Your second guess got it right!\n\n";
}
else  {
    cout << "Your Second guess is wrong(maybe again?) >:( try again next time. \n\n";
    cout << "The number was ";
    cout << iSecret;
    cout << " \n\n";
}


 }
 int main() {
     int Version1, Version2, a;
  string greeting = "Guess the number! \n\n Version 1\n\n Version 2\n\n";
  cout << greeting;
  cout << "Type version: ";
  cin >> a;
  if (a = Version1) {
   myVersion1();
   return 0;
  }
 }
