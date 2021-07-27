#include <iostream>
#include "windows.h"
using namespace std;
char map [13][23]={
    "ooooooooooooooooooo \n",
    "o8                o \n",
    "o                 o \n",
    "o                 o \n",
    "o                 o \n",
    "o                 o \n",
    "o                 o \n",
    "o                 o \n",
    "o                 o \n",
    "ooooooooooooooooooo \n"
};
char map2 [14][24]={
    "oooooooooooooooooooo \n",
    "o            x end o \n",
    "oxxxxxxxx    x     o \n",
    "o            x     o \n",
    "o                  o \n",
    "o  xxxxxxx   x     o \n",
    "o  x     x         o \n",
    "o  x  x  x  xxxxxxxo \n",
    "o  x  x            o \n",
    "oooooooooooooooooooo \n"
};

int x=1;
int y=1;
bool game_running = true;

int main()
{
while(game_running == true){
    system("cls");
    for(int display=0; display<10; display++){
        cout << map[display];
    }
    system("pause>nul");

    if(GetAsyncKeyState(VK_DOWN)){
        int y2 = y+1;
        if(map[y2][x] == ' '){
            map[y][x] = ' ';
            y++;
            map[y][x] = '8';
        }
    }

            if(GetAsyncKeyState(VK_UP)){
        int y2 = y-1;
        if(map[y2][x] == ' '){
            y--;
            map[y][x] = '8';
        }
    }
    if (GetAsyncKeyState(VK_RIGHT)){
        int x2 = x+1;
        if(map[y][x2] == ' '){
            map[y][x] = ' ';
            x++;
            map[y][x] = '8';
        }
    }
     if (GetAsyncKeyState(VK_LEFT)){
        int x2 = x-1;
        if(map[y][x2] == ' '){
            map[y][x] = ' ';
            x--;
            map[y][x] = '8';
        }
    }
}
return 0;
}
