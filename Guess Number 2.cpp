 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 #include <iostream>
 #include <string>
 using namespace std;

 int main() {
 int iSecret, iGuess;
 srand (time(NULL));
 iSecret = rand() % 10 + 1;

 cout << "Guess a number, 1 through 10.\n\n";
 cout << "Type a number to guess: ";
 cin >> iGuess;
 do{
if ( iSecret > iGuess){
    cout << "\n\n The number is bigger than that! \n\n";
    cout << "Type another number: ";
    cin >> iGuess;
}
else
 {
    cout << "\n\n The number is less than that! \n\n";
    cout << "Type another number: ";
cin>> iGuess;
}

}while ( iSecret != iGuess);
puts ( "\n\n Congratulations you did it!");

 }
