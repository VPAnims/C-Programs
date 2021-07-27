#include <iostream>
#include "windows.h"
#include <stdlib.h>
#include <conio.h>
using namespace std;
bool gameOver;
bool game_running;
bool game_pause;
bool game_start;
bool gameMain;
int x = 1;
int y = 1;
char map2 [15][25]={
    "##################### \n",
    "#0    Main Menu     # \n",
    "#     Level's       # \n",
    "#     Setting's     # \n",
    "##                  # \n",
    "#                   # \n",
    "#                   # \n",
    "#                   # \n",
    "#                   # \n",
    "##################### \n",
};
char map3 [15][25]={
    "##################### \n",
    "#0      LEVEL'S     # \n",
    "#                   # \n",
    "#   #####   #####   # \n",
    "#   # 1 #   # 2 #   # \n",
    "#   #####   #####   # \n",
    "#                   # \n",
    "#                   # \n",
    "#                   # \n",
    "##################### \n",
};
void Menu()
{
bool gameOver = false;
bool game_running = true;
bool game_pause = false;
bool game_start = false;
bool gameMain = true;
while(game_running == true){
 system("cls");
     for(int display=0; display<10; display++){
        cout << map2[display];
     }
     system("pause>nul");

    if(GetAsyncKeyState(VK_DOWN)){
        int y2 = y+1;
        if(map2[y2][x] == ' '){
            map2[y][x] = ' ';
            y++;
            map2[y][x] = '0';
        }
    }
            if(GetAsyncKeyState(VK_UP)){
        int y2 = y-1;
        if(map2[y2][x] == ' '){
            map2[y][x] = ' ';
            y--;
            map2[y][x] = '0';
        }
    }
    if(_kbhit()){
        switch(_getch()){
    case 'l':
       game_running = false;
        break;
        }
    }
}
}



void Levels()
{
bool gameOver = false;
bool game_running = true;
bool game_pause = false;
bool game_start = false;

}
void Settings()
{
bool gameOver = false;
bool game_running = true;
bool game_pause = false;
bool game_start = false;
}
void LeveL1()
{
bool gameOver = false;
bool game_running = true;
bool game_pause = false;
bool game_start = true;
}
void paused()
{
bool gameOver = false;
bool game_running = true;
bool game_pause = false;
bool game_start = true;
}
int main()
{
   while(!game_running){
    Menu();
   }
   return 0;
}
