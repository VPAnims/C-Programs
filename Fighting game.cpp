#include <iostream>
#include <time.h>
#include "windows.h"
using namespace std;
bool level;
bool level5;
bool level0;
bool level15;
bool level20;
bool game;
bool menutime;
int PowerWorthy;
int RequiemPowerWorthy;

void menu()
{
level = false;
level5 = false;
level0 = false;
level15 = false;
level20 = false;
game = true;
system("Color 0A");
srand (time(NULL));
RequiemPowerWorthy = 10;
PowerWorthy = rand() % 10 + 1;
do{
cout << "            F1 Play";
cout << "\n\n          F2 Settings "<< endl << endl;
cout << "            F3 Quit" << endl << endl;
system("pause > nul");
if(GetAsyncKeyState(VK_F1))
{
    menutime = false;

}
if(GetAsyncKeyState(VK_F2))
{
    system("cls");
    cout << " Press Space to Attack     Press Shift to attack      Press X to talk to an NPC";
    system("pause > nul");
}
if(GetAsyncKeyState(VK_F3))
{
    system("cls");
    menutime = false;
    exit ;
}
}while(menutime == true);

}
void RequiemAbilites()
{
    if(PowerWorthy < 4)
{
    cout << "\n\n" << " You Are Not Worthy" << "\n";
}
if(PowerWorthy > 4)
{
    cout << "\n\n" << " You Are Worthy" << "\n";
}
if(PowerWorthy == RequiemPowerWorthy)
{
    cout << "\n\n" << " You Realize Your Purpose" << "\n";
}
}
void PowerAbilites()
{

}
void leve1()
{
level = true;
level5 = false;
level0 = false;
level15 = false;
level20 = false;
game = true;
cout << " hi";
}
void leve5()
{
level = false;
level5 = true;
level0 = false;
level15 = false;
level20 = false;
game = true;

}
void leve10()
{
level = false;
level5 = false;
level0 = true;
level15 = false;
level20 = false;
game = true;

}
void leve15()
{
level = false;
level5 = false;
level0 = false;
level15 = true;
level20 = false;
game = true;

}
void leve20()
{
level = false;
level5 = false;
level0 = false;
level15 = false;
level20 = true;
game = true;

}
int main()
{
        menu();
        if(menutime){
          leve1();
        }
    return 0;
}
