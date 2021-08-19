#include <iostream>
#include <iomanip>
#include <string>
#include "windows.h"
using namespace std;
bool gameyall;
bool color;
int a, b, c;

void colorchange()
{
}

int main() {
    gameyall = true;
    color = true;
    do{
    system("Color 9F");
    cout << setw(25)<<" ULTIMATE TRIVIA \n" << endl;
    cout << setw(20)<<"Play \n" << endl;
    system("pause > nul");
    if(GetAsyncKeyState(VK_SPACE))
    {
        cout << "HI";
    }
    }while(gameyall = true);
  return 0;
}
