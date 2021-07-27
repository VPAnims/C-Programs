#include <iostream>
#include <string>
#include "windows.h"
using namespace std;
char map [14][24]={
    "oooooooooooooooooooo \n",
    "o8           xxx@xxo \n",
    "oxxxxxxxx    xxx xxo \n",
    "o            x     o \n",
    "o  x         x     o \n",
    "o  xxxxxxx   x     o \n",
    "o  x     x         o \n",
    "o xx xx  x  xxxxxxxo \n",
    "o%xx+xx            o \n",
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
            map[y][x] = ' ';
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


